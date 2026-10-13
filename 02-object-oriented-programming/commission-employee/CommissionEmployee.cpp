
#include <iostream>
#include <iomanip>
#include <string>
#include "CommissionEmployee.h"
using namespace std;

CommissionEmployee::CommissionEmployee(const string& f,const string& l,const string& ssn,double s,double r)
:firstName(f),lastName(l),socialSecurityNumber(ssn),grossSales(s),commissionRate(r) {

}

CommissionEmployee::CommissionEmployee(const CommissionEmployee& other)
:firstName(other.firstName),lastName(other.lastName),socialSecurityNumber(other.socialSecurityNumber),grossSales(other.grossSales),commissionRate(other.commissionRate) {
//Task1.1
}

void CommissionEmployee::setFirstName(const string& f){
	firstName=f;
}
std::string CommissionEmployee::getFirstName() const{
	return firstName;
}

void CommissionEmployee::setLastName(const string& l){
	lastName=l;

}
std::string CommissionEmployee::getLastName() const{
	return lastName;
}

void CommissionEmployee::setSocialSecurityNumber(const string& ssn){
	socialSecurityNumber=ssn;
}
std::string CommissionEmployee::getSocialSecurityNumber() const{
	return socialSecurityNumber;
}

void CommissionEmployee::setGrossSales(double s){
	if(s<0.0)
		throw invalid_argument("Gross sales must be >= 0.0");
	grossSales=s;
}
double CommissionEmployee::getGrossSales() const{
	return grossSales;
}

void CommissionEmployee::setCommissionRate(double r){
	if(r<=0.0 || r>=1.0){
		throw invalid_argument("Commission rate must be > 0.0 and < 1.0");
	}
	commissionRate=r;
}
double CommissionEmployee::getCommissionRate() const{
	return commissionRate;
}

double CommissionEmployee::earnings() const{
	return commissionRate * grossSales;
}

std::string CommissionEmployee::toString() const{
	ostringstream out;
	out << fixed << std::setprecision(2);
	out << "commission employee: " <<firstName<< " " << lastName
		   << "\nsocial security number: " << socialSecurityNumber
		   << "\ngross sales: " <<grossSales
		   << "\ncommission rate: " << commissionRate
		   << "\nearnings: " <<  std::setprecision(2) << earnings();
	return out.str();
}

bool checkGrossSales(const CommissionEmployee& e, double baseline) {
	return e.grossSales>=baseline;
}//Task1.6

