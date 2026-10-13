
#ifndef COMMISSION_H_
#define COMMISSION_H_

#include <string>

class CommissionEmployee{

protected:
	std::string firstName;
	std::string lastName;
	std::string socialSecurityNumber;
	double grossSales;
	double commissionRate;

public:
	CommissionEmployee(const std::string&, const std::string&, const std::string&, double =0.0, double =0.0);

	CommissionEmployee(const CommissionEmployee& other);//Task1.1

	void setFirstName(const std::string&);
	std::string getFirstName() const;

	void setLastName(const std::string&);
	std::string getLastName() const;

	void setSocialSecurityNumber(const std::string&);
	std::string getSocialSecurityNumber() const;

	void setGrossSales(double);
	double getGrossSales() const;

	void setCommissionRate(double);
	double getCommissionRate() const;

	double earnings() const;

	std::string toString() const;

	friend bool checkGrossSales(const CommissionEmployee& e, double baseline);//Task1.6

};


#endif /* COMMISSION_H_ */
