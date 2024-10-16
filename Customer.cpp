#include <iostream>
#include <string>

using namespace std;

class Customer {
private:
    string name;
    int age;
    static int customerCount;  

public:
    Customer() {
        name = "Unknown";
        age = 0;
        customerCount++;
    }

    Customer(string n, int a) {
        name = n;
        age = a;
        customerCount++;
    }

    
    ~Customer() {
        customerCount--;  
    }

    static int getCustomerCount() {
        return customerCount;
    }

    void setDetails(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void displayDetails() const {
        cout << "Customer Name: " << name << ", Age: " << age << endl;
    }

    void checkEligibilityForDiscount() const {
        if (age > 25) {
            cout << name << " is eligible for a discount!" << endl;
        } else {
            cout << name << " is not eligible for a discount." << endl;
        }
    }
};

int Customer::customerCount = 0;
