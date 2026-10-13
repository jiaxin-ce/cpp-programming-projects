
#ifndef ASSIGNMENT_4_IOTDATATENSOR_H
#define ASSIGNMENT_4_IOTDATATENSOR_H
#include "RankOneTensorType.h"
#include <stdexcept>
#include <sstream>
#include <fstream>

class IoTDataTensor : public RankOneTensorType<string>{
public:
    IoTDataTensor (){
        iot_category.resize(0);
        iot_data.resize(0);
    }

    double getValue(int row, int col) {
        if (row<0 || row>=iot_category.size() || col<0 || col>=iot_category.size())
           throw std::out_of_range("index out of range");
        return std::stod(iot_data[row][col]);
    }

    string getCategory(int col) {
        if (col<0 || col>=iot_category.size())
            throw std::out_of_range("index out of range");
        return iot_category[col];
    }

    void loadData() override{
        std::ifstream infile("shard_0.txt");
        if (!infile.is_open()) {
            throw std::runtime_error("can't open file");
        }
        std::string line;
        iot_category.clear();
        iot_data.clear();
        std::getline(infile, line);
        std::istringstream category(line);
        std::string token;
        while (std::getline(category, token, ',')) {
            iot_category.push_back(token);
        }

        while (std::getline(infile,line)) {
            std::stringstream ss(line);
            std::string token;
            RankOneTensorType<std::string> rowTensor(iot_category.size());
            int col = 0;
            while (std::getline(ss, token, ',')) {
                if (col>=iot_category.size())
                    break;
                rowTensor[col] = token;
                col++;
            }
            iot_data.push_back(rowTensor);
        }
        infile.close();
}

    int getRowCount() const {
        return iot_data.size();
    }

    int getColCount() const {
        return iot_category.size();
    }

    void display()  {
        for (int col = 0; col < this->getColCount(); ++col) {
            std::cout << this->getCategory(col) << '\n';
        }

        for (int row = 0; row < this->getRowCount(); ++row) {
            cout<<"Data: [";
            for (int col = 0; col < this->getColCount(); ++col) {
                std::cout << iot_data[row][ col];
                if (col< this->getColCount()-1) cout << ", ";
            }
            std::cout <<"]\n";
        }
    }

private:
    std::vector<string> iot_category;
    std::vector<RankOneTensorType<std::string>> iot_data;
};


#endif //ASSIGNMENT_4_IOTDATATENSOR_H