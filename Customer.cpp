#include <iostream>
#include <string>
using namespace std;

class Customer {
protected:
    string name;
    int age;
    static int totalCustomers;

public:
    
    Customer(string name = "", int age = 0) {
        this->name = name;
        this->age = age;
        totalCustomers++;
    }

    ~Customer() {
        totalCustomers--;
    }

    static int getTotalCustomers() {
        return totalCustomers;
    }

    virtual void displayDetails() {
        cout << "Customer Name: " << name << ", Age: " << age << endl;
    }

    bool isEligibleForDiscount() {
        return age > 25;
    }
};

int Customer::totalCustomers = 0;

class PremiumCustomer : public Customer {
public:
    PremiumCustomer(string name = "", int age = 0) : Customer(name, age) {}

    void displayDetails() override {
        cout << "Premium Customer Name: " << name << ", Age: " << age << endl;
        if (isEligibleForDiscount()) {
            cout << "Eligible for discount!" << endl;
        } else {
            cout << "Not eligible for discount." << endl;
        }
    }
};

class RegularCustomer : public Customer {
public:
    RegularCustomer(string name = "", int age = 0) : Customer(name, age) {}

    void displayDetails() override {
        cout << "Regular Customer Name: " << name << ", Age: " << age << endl;
    }
};
