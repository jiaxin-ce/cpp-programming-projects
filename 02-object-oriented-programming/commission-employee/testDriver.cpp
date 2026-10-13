
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include <iostream>

void test(){
	CommissionEmployee cp("abc","def","123",0,0);
	std::cout << cp.toString() << std::endl;

	std::cout << "----------------------------"<<std::endl;

	BasePlusCommissionEmployee bp("ghi","lmn", "456",1,1,5);
	std::cout << bp.toString() << std::endl;

}//original test function

void test_4() {
	try{
		CommissionEmployee a("hkl","yui","4567890234",350000,0.35);
		std::cout<<"----------test base object----------"<<std::endl;
		std::cout << a.toString() << std::endl;

		BasePlusCommissionEmployee b("abc", "def", "0987654321", 250000, 0.15, 5000);
		std::cout<<"----------test derived object----------"<<std::endl;
		std::cout << b.toString() << std::endl;
	}
	catch (const invalid_argument& i) {
		cout<< "Error: " << i.what()<<endl;
	}
}	//Task1.4 Add a new test function to get output consistent with the assignment description.

void test_5() {
	CommissionEmployee a("John","Smith","23490", 120564.23, 0.785);
	CommissionEmployee b(a);
	std::string result=(a.getFirstName()==b.getFirstName() &&
		a.getLastName()==b.getLastName() &&
		a.getSocialSecurityNumber()==b.getSocialSecurityNumber() &&
		a.getGrossSales()==b.getGrossSales()&&
		a.getCommissionRate()==b.getCommissionRate() ) ? "pass":"fail";
	std::cout<<"----------test copy constructor in class CommissionEmployee----------"<<std::endl;
	std::cout<<a.toString()<<std::endl<<b.toString()<<std::endl;
	std::cout<<result<<std::endl;

	BasePlusCommissionEmployee c("Emma","Brown","57283", 219864, 0.55, 22500);
	BasePlusCommissionEmployee d(c);
	std::string result_=(c.getFirstName()==d.getFirstName() &&
		c.getLastName()==d.getLastName() &&
		c.getSocialSecurityNumber()==d.getSocialSecurityNumber() &&
		c.getGrossSales()==d.getGrossSales()&&
		c.getCommissionRate()==d.getCommissionRate()&&
		c.getBaseSalary()==d.getBaseSalary()) ? "pass":"fail";
	std::cout<<"----------test copy constructor in class BasePlusCommissionEmployee----------"<<std::endl;
	std::cout<<c.toString()<<std::endl<<d.toString()<<std::endl;
	std::cout<<result_<<std::endl;
}//Task1.5

void testFriendAndInheritance() {
	BasePlusCommissionEmployee basePlusMember("abc", "def", "0987654321", 250000,0.15,5000);
	double base1=100000;
	string result1=(checkGrossSales(basePlusMember,base1)==1)?"pass":"fail";
	cout<<"----------test friend and inheritance----------"<<endl;
	cout<<"For base line "<<base1<<" "<<result1<<std::endl;
	double base2=5000;
	string result2=(checkGrossSales(basePlusMember,base2)==1)?"pass":"fail";
	cout<<"For base line "<<base2<<" "<<result2<<std::endl;
}//Task1.7



int main(){
	test();

	test_4();
	test_5();
	testFriendAndInheritance();
	return 0;

}

