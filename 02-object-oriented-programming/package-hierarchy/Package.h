

#ifndef A3_PACKAGE_H
#define A3_PACKAGE_H
#include <string>

class Package {

protected:
    std::string name_sender;
    std::string address_sender;
    std::string city_sender;
    std::string state_sender;
    std::string ZIP_code_sender;

    std::string name_recipient;
    std::string address_recipient;
    std::string city_recipient;
    std::string state_recipient;
    std::string ZIP_code_recipient;

    double weight;
    double costPerOunce;

public:
    Package(std::string, std::string, std::string, std::string, std::string,
        std::string, std::string, std::string, std::string, std::string, double, double);
    //constructor
    virtual ~Package()=default;
    //virtual destructor
    virtual double calculateCost() const;
    //virtual calculateCost function
    std::string getNameSender() const;
    std::string getAddressSender() const;
    std::string getCitySender() const;
    std::string getStateSender() const;
    std::string getZIPCodeSender() const;
    std::string getNameRecipient() const;
    std::string getAddressRecipient() const;
    std::string getCityRecipient() const;
    std::string getStateRecipient() const;
    std::string getZIPCodeRecipient() const;
    double getWeight() const;
    double getCostPerOunce() const;

    void setNameSender(std::string);
    void setAddressSender(std::string);
    void setCitySender(std::string);
    void setStateSender(std::string);
    void setZIPCodeSender(std::string);
    void setNameRecipient(std::string);
    void setAddressRecipient(std::string);
    void setCityRecipient(std::string);
    void setStateRecipient(std::string);
    void setZIPCodeRecipient(std::string);
    void setWeight(double);
    void setCostPerOunce(double);
    //getter and setter

};

#endif //A3_PACKAGE_H