#include <iostream>
#include <string>

using namespace std;

// Base Customer class
class Customer {
protected:
    string name;
    int age;

public:
    Customer(string name, int age) : name(name), age(age) {}

    string getName() const { return name; }
    int getAge() const { return age; }

    virtual void displayDetails() {
        cout << "Customer Name: " << name << ", Age: " << age << endl;
    }

    virtual ~Customer() {} // Virtual destructor to support polymorphism
};

// Separate class to handle discount eligibility logic (SRP applied)
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

// Derived classes
class RegularCustomer : public Customer {
public:
    RegularCustomer(string name, int age) : Customer(name, age) {}

    void displayDetails() override {
        cout << "Regular Customer: " << name << ", Age: " << age << endl;
    }
};

class PremiumCustomer : public Customer {
public:
    PremiumCustomer(string name, int age) : Customer(name, age) {}

    void displayDetails() override {
        cout << "Premium Customer: " << name << ", Age: " << age << endl;
    }
};

// using ocp
class VIPCustomer : public Customer {
public:
    VIPCustomer(string name, int age) : Customer(name, age) {}

    void displayDetails() override {
        cout << "VIP Customer: " << name << ", Age: " << age << endl;
    }
};
