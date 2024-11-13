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

    // Public getter methods for protected members
    string getName() const { return name; }
    int getAge() const { return age; }

    virtual void displayDetails() {
        cout << "Customer Name: " << name << ", Age: " << age << endl;
    }
};
int Customer::customerCount = 0;

// Separate class for checking discount eligibility (SRP implementation)
class DiscountEligibilityChecker {
public:
    static void checkDiscountEligibility(Customer* customer) {
        if (customer->getAge() > 25) {
            cout << customer->getName() << " is eligible for a premium discount." << endl;
        } else {
            cout << customer->getName() << " is not eligible for a premium discount." << endl;
        }
    }
};

// RegularCustomer subclass inheriting Customer
class RegularCustomer : public Customer {
public:
    RegularCustomer() : Customer() {}
    RegularCustomer(string name, int age) : Customer(name, age) {}

    void displayDetails() override {
        cout << "Regular Customer: " << name << ", Age: " << age << endl;
    }
};

// PremiumCustomer subclass inheriting Customer
class PremiumCustomer : public Customer {
public:
    PremiumCustomer() : Customer() {}
    PremiumCustomer(string name, int age) : Customer(name, age) {}

    void displayDetails() override {
        cout << "Premium Customer: " << name << ", Age: " << age << endl;
    }
};
