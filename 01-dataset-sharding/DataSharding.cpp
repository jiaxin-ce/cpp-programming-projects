#include <cmath>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

void testIoTDataSample(){
    string fileLocation = "RT_IOT2022";
    ifstream file(fileLocation);
    if(!file){
        string error_msg = fileLocation + " was not open properly!";
        throw runtime_error(error_msg);
    }

string line;
getline(file, line);
stringstream lineString(line);

int size(0);
string token;
while (getline(lineString, token, ',')) {
    cout<<token<<endl;
    ++size;
}
cout << "\nTotally #" << size << " attributes!\n" <<endl;


while(getline(file, line)){
        lineString.clear();
        lineString.str("");
        lineString.str(line);
        string token;
        cout << "Data : [";
        while (lineString >> token) {
            cout << token << "," ;
        }
        cout << " ]" << endl;
    }

    file.close();
}

void shardData(string fileLocation, int shard_size) {
    ifstream file(fileLocation);
    if(!file) {
        string error_msg = fileLocation + " was not open properly!";
        throw runtime_error(error_msg);
    }
    string first_line;
    getline(file, first_line);

    vector<string>data;
    string line;
    while (getline(file, line)) {
        data.push_back(line);
    }
    file.close();

    int total_data = data.size();
    int shard_num = ceil(static_cast<double>(total_data)/ shard_size);

    cout<<"Total #"<<total_data<<" data"<<endl;
    cout<<"Shard size #"<<shard_size<<endl;
    cout<<"Number of shard #"<<shard_num<<endl;

    for (int i = 0; i < shard_num; i++) {
        string fileName = "shard_" + to_string(i) + ".txt";
        ofstream out(fileName);
        out<<first_line<<endl;

        int start = i * shard_size;
        int end = min (start + shard_size, total_data);
        for (int j = start; j < end; j++) {
            out << data[j]<<endl;
        }
        out.close();
        cout<<"File #"<<fileName<<" created"<<endl;
    }
}

int main() {
    //testIoTDataSample();
    int shard_size;
    cout<<"Enter shard size:"<<endl;
    cin>>shard_size;
    shardData("RT_IOT2022", shard_size);
    return 0;
}