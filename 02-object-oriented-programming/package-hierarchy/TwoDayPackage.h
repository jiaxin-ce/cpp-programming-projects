

#ifndef A3_TWODAYPACKAGE_H
#define A3_TWODAYPACKAGE_H

#include "Package.h"

class TwoDayPackage final : public Package {
private:
    double flatFee;
public:
    TwoDayPackage(std::string, std::string, std::string, std::string, std::string,
        std::string, std::string, std::string, std::string, std::string, double, double, double);
    //constructor
     virtual~TwoDayPackage() =default;
    //destructor
    double calculateCost() const override;
    //override calculateCost function
};
#endif //A3_TWODAYPACKAGE_H