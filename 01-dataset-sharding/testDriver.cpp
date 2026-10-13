#include "RankOneTensorType.h"
#include <iostream>
#include <iostream>
using namespace std;

void testTensorType(){
    RankOneTensorType<string> tensor(2);
    tensor[0] = "Hello";
    tensor[1] = "Coen244";
    cout<< tensor;
    RankOneTensorType<double> dtensor(2);
    dtensor[0] = 0.15;
    dtensor[1] = 0.30;
    cout << dtensor;
    RankOneTensorType<double> dtensor2(2);
    dtensor2.loadData();
    cout << dtensor2;
    cout << dtensor+dtensor2;
    cout << dtensor[0];
}

int main() {
    testTensorType();
    return 0;
}