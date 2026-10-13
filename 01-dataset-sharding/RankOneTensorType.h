

#ifndef ASSIGNMENT_4_RANKONETENSOR_H
#define ASSIGNMENT_4_RANKONETENSOR_H
#include <vector>
#include <string>
#include <iostream>
#include <random>
#include <algorithm>
using namespace std;


class BaseTensor {
    public:
    virtual void loadData() = 0;
    virtual ~BaseTensor() = default;
    BaseTensor() = default;
};

template <typename T>
class RankOneTensorType : public BaseTensor {
    private:
    vector<T> data;
    public:
    RankOneTensorType() : data(0) {};
    RankOneTensorType(int size) : data(size) {};
    ~RankOneTensorType() = default;
    void loadData() override;

    RankOneTensorType<T>& operator++ () {
        for (auto& i : data) {
            i += 1;
        }
        return *this;
    }

    RankOneTensorType<T> operator+ (const RankOneTensorType<T>& other) {
        if (data.size() != other.data.size()) {
            throw invalid_argument("Dimension does not match");
        }
            RankOneTensorType<T> result(data.size());
            for (int i = 0; i < data.size(); i++) {
                result.data[i] = data[i] + other.data[i];
            }
        return result;
    }

    RankOneTensorType<T> operator+ (T scalar) {
        RankOneTensorType<T> result(data.size());
        for (int i = 0; i < data.size(); i++) {
            result.data[i] = data[i] + scalar;
        }
        return result;
    }

    RankOneTensorType<T>& operator= (const RankOneTensorType<T>& other) {
        if (data.size() != other.data.size()) {
            throw invalid_argument("Dimension does not match");
        } else {
            for (int i = 0; i < data.size(); i++) {
                data[i] = other.data[i];
            }
        }
        return *this;
    }

    friend ostream& operator<< (ostream& out, const RankOneTensorType<T>& t) {
        out<<"Data: [";
        for (int i = 0; i < t.data.size(); i++) {
            out << t.data[i];
            if (i + 1 < t.data.size()) out << ", ";
        }
        out<<"]\n";
        return out;
    }

    friend istream& operator>> (istream& in, RankOneTensorType<T>& t) {
        for (auto& i : t.data) {
            in >> i;
        }
        return in;
    }

    T& operator[](int index) {
        if (index >= data.size()) {
            throw invalid_argument("Index is out of range");
        } else {
            return data[index];
        }
    }
};



template <>
inline void RankOneTensorType<double>::loadData() {
    random_device rd;
    mt19937 valueGen(rd());
    uniform_real_distribution<double> dist(0.0, 1.0);
    fill(data.begin(), data.end(), dist(valueGen));
}

template <>
inline void RankOneTensorType<string>::loadData() {
    random_device rd;
    mt19937 valueGen(rd());
    uniform_real_distribution<double> dist(0.0, 1.0);
    fill(data.begin(), data.end(), to_string(dist(valueGen)));
}


#endif //ASSIGNMENT_4_RANKONETENSOR_H