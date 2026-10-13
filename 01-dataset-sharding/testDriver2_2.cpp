#include "IotDataTensor.h"

void testIoTDataTensor(){
    IoTDataTensor iot;
    try{
        iot.loadData();
        iot.display();
        int row = 0;
        int col = 5;
        cout << iot.getCategory(col) << " : " << iot.getValue(row,col);
    }catch(std::runtime_error& e){
        std::cerr << e.what() << std::endl;
    }
}


int main() {

    testIoTDataTensor();
    return 0;
}