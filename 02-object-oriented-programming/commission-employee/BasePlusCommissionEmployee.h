
#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H_
#define BASEPLUSCOMMISSIONEMPLOYEE_H_

#include "CommissionEmployee.h"
#include <string>
using namespace std;

class BasePlusCommissionEmployee : public CommissionEmployee{

private:
	double baseSalary;

public:
	BasePlusCommissionEmployee(const string&, const string&, const string&, double =0.0, double =0.0, double =0.0);

	BasePlusCommissionEmployee(const BasePlusCommissionEmployee& other);//Task1.2

	void setBaseSalary(double);
	double getBaseSalary() const;

	double earnings() const;

	std::string toString() const;

};


#endif /* BASEPLUSCOMMISSIONEMPLOYEE_H_ */
