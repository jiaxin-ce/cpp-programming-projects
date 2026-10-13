

#ifndef A3_OVERNIGHTPACKAGE_H
#define A3_OVERNIGHTPACKAGE_H

#include "Package.h"

class OvernightPackage final: public Package {
private:
    double additionalFee;
    public:
    OvernightPackage(std::string, std::string, std::string, std::string, std::string,
        std::string, std::string, std::string, std::string, std::string, double, double, double);
    //constructor
    virtual ~OvernightPackage()=default;
    //destructor
    double calculateCost() const override;
    //override calculateCost function

};
#endif //A3_OVERNIGHTPACKAGE_H