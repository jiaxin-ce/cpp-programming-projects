#include "Package.h"
#include <stdexcept>
using namespace std;

Package::Package(std::string name_s, std::string address_s, std::string city_s, std::string state_s, std::string code_s,
std::string name_r, std::string address_r, std::string city_r, std::string state_r, std::string code_r, double w, double cost) :
name_sender(name_s), address_sender(address_s), city_sender(city_s), state_sender(state_s), ZIP_code_sender(code_s),
name_recipient(name_r), address_recipient(address_r), city_recipient(city_r), state_recipient(state_r), ZIP_code_recipient(code_r),
weight((w > 0) ? w : throw std::invalid_argument("weight must be positive")),
costPerOunce((cost > 0) ? cost : throw std::invalid_argument("cost per ounce must be positive")) {}
//constructor for package

double Package::calculateCost() const {
return weight * costPerOunce;
}//calculateCost function

string Package::getNameSender() const {
    return name_sender;
}
string Package::getAddressSender() const {
    return address_sender;
}
string Package::getCitySender() const {
    return city_sender;
}
string Package::getStateSender() const {
    return state_sender;
}
string Package::getZIPCodeSender() const {
    return ZIP_code_sender;
}
string Package::getNameRecipient() const {
    return name_recipient;
}
string Package::getAddressRecipient() const {
    return address_recipient;
}
string Package::getCityRecipient() const {
    return city_recipient;
}
string Package::getStateRecipient() const {
    return state_recipient;
}
string Package::getZIPCodeRecipient() const {
    return ZIP_code_recipient;
}
double Package::getWeight() const {
    return weight;
}
double Package::getCostPerOunce() const {
    return costPerOunce;
}
//getter functions
void Package::setNameSender(std::string n) {
   name_sender = n;
}
void Package::setAddressSender(std::string a) {
    address_sender = a;
}
void Package::setCitySender(std::string c) {
    city_sender = c;
}
void Package::setStateSender(std::string s) {
    state_sender = s;
}
void Package::setZIPCodeSender(std::string z) {
    ZIP_code_sender = z;
}
void Package::setNameRecipient(std::string n) {
    name_recipient = n;
}
void Package::setAddressRecipient(std::string a) {
    address_recipient = a;
}
void Package::setCityRecipient(std::string c) {
    city_recipient = c;
}
void Package::setStateRecipient(std::string s) {
    state_recipient = s;
}
void Package::setZIPCodeRecipient(std::string z) {
    ZIP_code_recipient = z;
}
void Package::setWeight(double w) {
    if (w>0) {
        weight = w;
    } else {
        throw std::invalid_argument("weight should be positive");
    }
}
void Package::setCostPerOunce(double c) {
    if (c>0) {
        costPerOunce = c;
    } else {
        throw std::invalid_argument("cost per ounce should be positive");
    }
}
//setter functions