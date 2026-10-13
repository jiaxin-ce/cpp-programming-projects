#include "TwoDayPackage.h"

#include "Package.h"
using namespace std;

TwoDayPackage::TwoDayPackage(std::string name_s, std::string address_s, std::string city_s, std::string state_s, std::string code_s,
std::string name_r, std::string address_r, std::string city_r, std::string state_r, std::string code_r, double w, double cost, double flat) :
Package(name_s, address_s, city_s, state_s, code_s,name_r,  address_r,  city_r,  state_r,
    code_r,  w,  cost), flatFee(flat) {
}//constructor

double TwoDayPackage::calculateCost() const {
    return flatFee + Package::calculateCost();
} //override calculateCost function