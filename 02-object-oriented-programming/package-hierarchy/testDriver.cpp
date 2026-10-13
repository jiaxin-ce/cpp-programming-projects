#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;


void testStaticBinding() {
    TwoDayPackage t1("Sam", "305 Street", "Toronto", "Ontario", "2P3 7R9",
    "Sarah", "3463 Street", "Vancouver", "BC", "23E PY8", 278.6, 0.15, 7.5);
    cout<<"----------test static binding for class 1----------"<<endl;
    cout<<fixed<<setprecision(2)<<left
        <<setw(15)<<"Sender: "<<setw(10)<<t1.getNameSender()<<setw(15)<<t1.getAddressSender()
        <<setw(15)<<t1.getCitySender()<<setw(15)<<t1.getStateSender()<<setw(10)<<t1.getZIPCodeSender()<<endl
    <<setw(15)<<"Recipient: "<<setw(10)<<t1.getNameRecipient()<<setw(15)<<t1.getAddressRecipient()
            <<setw(15)<<t1.getCityRecipient()<<setw(15)<<t1.getStateRecipient()<<setw(10)<<t1.getZIPCodeRecipient()
            <<endl<<"Cost: "<<t1.calculateCost()<<endl;
    string result = (t1.calculateCost()==49.29)?"pass":"fail";
    cout<<"result: "<<result<<endl;

    OvernightPackage o1("Emma", "6351 Road", "Victoria", "BC", "2E1 3R9",
    "John", "102 Road", "Calgary", "AB", "2W0 0P4", 573.4, 0.10, 0.02);
    cout<<"----------test static binding for class 2----------"<<endl;
    cout<<fixed<<setprecision(2)<<left
           <<setw(15)<<"Sender: "<<setw(10)<<o1.getNameSender()<<setw(15)<<o1.getAddressSender()
           <<setw(15)<<o1.getCitySender()<<setw(15)<<o1.getStateSender()<<setw(10)<<o1.getZIPCodeSender()<<endl
    <<setw(15)<<"Recipient: "<<setw(10)<<o1.getNameRecipient()<<setw(15)<<o1.getAddressRecipient()
                <<setw(15)<<o1.getCityRecipient()<<setw(15)<<o1.getStateRecipient()<<setw(10)<<o1.getZIPCodeRecipient()
                <<endl<<"Cost: "<<o1.calculateCost()<<endl;
    string result_ = (o1.calculateCost()==68.808)?"pass":"fail";
    cout<<"result: "<<result_<<endl;
}//unit test function for static binding with objects created for each type of Package and tests member function calculateCost

void testDynamicBinding() {
    vector <Package*> packages;
    packages.push_back(new TwoDayPackage( "Tom", "213 Street", "Waterloo", "Ontario", "03B 7R9",
    "Jim", "367 Street", "Richmond", "BC", "10L PY8", 102.3, 0.15, 3.8 ));
    packages.push_back(new TwoDayPackage( "Tony", "902 Street", "Kitchener", "Ontario", "Z7Q 7R9",
    "Lucy", "2092 Street", "Victoria", "BC", "01M PY8", 902.4, 0.15, 7.2 ));
    packages.push_back( new TwoDayPackage( "Jane", "2088 Street", "Edmonton", "AB", "2Y6 B1W",
    "Amy", "903 Street", "Regina", "SK", "2C6 M5B", 317.9, 0.11, 10.5 ));
    packages.push_back( new TwoDayPackage( "Jessica", "355 Street", "Quebec", "QC", "2V8 0Z1",
    "Harold", "101 Street", "Halifax", "NS", "MP6 53X", 267.5, 0.14, 3.8 ));
    packages.push_back( new TwoDayPackage( "David", "3465 Street", "Whitehorse", "Yukon", "Q0O 7BC",
    "Nathan", "618 Street", "Montreal", "BC", "C6T PY8", 512.3, 0.24, 10.2 ));
    packages.push_back( new OvernightPackage("Ryan", "6351 Road", "Victoria", "BC", "2E1 3R9",
    "Allen", "102 Road", "Calgary", "AB", "2W0 0P4", 293.1, 0.16, 0.05));
    packages.push_back( new OvernightPackage("Bella", "014 Road", "Yellowknife", "NT", "9GI 24M",
    "Neil", "396 Road", "St. John's", "NL", "X2A 09F", 1038.5, 0.27, 0.12));
    packages.push_back( new OvernightPackage("Ava", "2366 Road", "Charlottetown", "PE", "B2H T5E",
    "Henry", "408 Road", "Ottawa", "ON", "W2V 8TY", 823.4, 0.18, 0.08));
    packages.push_back( new OvernightPackage("Steven", "607 Road", "Winnipeg", "MB", "WC4 82C",
    "Emily", "388 Road", "Calgary", "AB", "19I 0P4", 1476.2, 0.16, 0.03));
    packages.push_back( new OvernightPackage("Zack", "214 Road", "Victoria", "BC", "P8B 3R9",
    "Jack", "663 Road", "Markham", "ON", "Q3B V4T", 892.4, 0.12, 0.11));
    cout<<"----------test dynamic binding----------"<<endl;
    double totalFee = 0;
    for (const Package* package : packages) {
        cout<<fixed<<setprecision(2)<<left
        <<setw(15)<<"Sender: "<<setw(10)<<package->getNameSender()<<setw(15)<<package->getAddressSender()
        <<setw(15)<<package->getCitySender()<<setw(15)<<package->getStateSender()<<setw(10)<<package->getZIPCodeSender()<<endl

        <<setw(15)<<"Recipient: "<<setw(10)<<package->getNameRecipient()<<setw(15)<<package->getAddressRecipient()
        <<setw(15)<<package->getCityRecipient()<<setw(15)<<package->getStateRecipient()<<setw(10)<<package->getZIPCodeRecipient()
        <<endl<<"Cost: "<<package->calculateCost()<<endl<<endl;

        totalFee+=package->calculateCost();
    }
    cout<<"total cost for all packages: "<<totalFee<<endl;

    for (Package* package : packages)
        delete package;
}//unit test function for polymorphism using dynamic binding

int main() {
    testStaticBinding();
    testDynamicBinding();
    return 0;
}
