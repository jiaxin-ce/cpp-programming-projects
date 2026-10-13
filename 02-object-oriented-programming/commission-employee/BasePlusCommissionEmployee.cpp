//Task1.3
#include "BasePlusCommissionEmployee.h"
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string& first, const string& last, const string& ssn, double sale, double rate, double salary)
:CommissionEmployee(first, last, ssn, sale, rate), baseSalary(salary) {

}

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const BasePlusCommissionEmployee &other)
:CommissionEmployee(other), baseSalary(other.baseSalary) {

}

void BasePlusCommissionEmployee::setBaseSalary(double b) {
    if (b<0.0) {
        throw invalid_argument ("Base salary must be >= 0.0");
    }
    baseSalary=b;
}

double BasePlusCommissionEmployee::getBaseSalary() const {
    return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const {
    return (baseSalary + CommissionEmployee::earnings());
}

std::string BasePlusCommissionEmployee::toString() const {
    ostringstream out;
    out<<fixed<<setprecision(2);
    out<<"BasePlusCommission employee: " <<firstName<< " " << lastName
    << "\nsocial security number: " << socialSecurityNumber
    << "\ngross sales: " <<grossSales
    << "\ncommission rate: " << commissionRate
    <<"\nbase salary: "<<baseSalary
    <<"\nearnings: "<< earnings();
    return out.str();
}
