#include <iostream>
#include <string>
using namespace std;

class Customer {
protected:
    string name;
    int age;

public:
    Customer(string name, int age) : name(name), age(age) {}
    virtual ~Customer() {}

    virtual void displayDetails() {
        cout << "Customer Name: " << name << ", Age: " << age << endl;
    }

    virtual bool isEligibleForDiscount() = 0; // Pure virtual function
};

class RegularCustomer : public Customer {
public:
    RegularCustomer(string name, int age) : Customer(name, age) {}

    void displayDetails() override {
        cout << "Regular Customer: " << name << ", Age: " << age << endl;
    }

    bool isEligibleForDiscount() override {
        return age > 25; // Regular customers must be older than 25 for discounts
    }
};

class PremiumCustomer : public Customer {
public:
    PremiumCustomer(string name, int age) : Customer(name, age) {}

    void displayDetails() override {
        cout << "Premium Customer: " << name << ", Age: " << age << endl;
    }

    bool isEligibleForDiscount() override {
        return true; // Premium customers are always eligible
    }
};
