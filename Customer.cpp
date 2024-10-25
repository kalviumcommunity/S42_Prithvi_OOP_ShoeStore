#include <iostream>
#include <string>

using namespace std;

class Customer {
protected:
    string name;
    int age;

public:
    static int customerCount;

    Customer() : name("Unknown"), age(0) {}  
    Customer(string name, int age) : name(name), age(age) {
        customerCount++;
    }

    virtual void displayDetails() {
        cout << "Customer Name: " << name << ", Age: " << age << endl;
    }

    virtual void checkDiscountEligibility() {
        if (age > 25) {
            cout << name << " is eligible for a premium discount." << endl;
        } else {
            cout << name << " is not eligible for a premium discount." << endl;
        }
    }
};

int Customer::customerCount = 0;

class RegularCustomer : public Customer {
public:
    RegularCustomer() : Customer() {}
    RegularCustomer(string name, int age) : Customer(name, age) {}

    void displayDetails() override {
        cout << "Regular Customer: " << name << ", Age: " << age << endl;
    }
};

class PremiumCustomer : public Customer {
public:
    PremiumCustomer() : Customer() {}
    PremiumCustomer(string name, int age) : Customer(name, age) {}

    void displayDetails() override {
        cout << "Premium Customer: " << name << ", Age: " << age << endl;
    }
};
