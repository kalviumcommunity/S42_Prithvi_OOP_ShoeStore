#include <iostream>
#include <string>

using namespace std;

class Customer {
public:
    // Data members
    string name;
    int age;

    // Member functions
    void setDetails(string name, int age) {
        this->name = name;  // Using the this pointer to distinguish between parameter and class member
        this->age = age;    // Using the this pointer
    }

    void displayDetails() {
        cout << "Customer Name: " << this->name << ", Age: " << this->age << endl;
    }

    void copyDetails(Customer &other) {
        this->name = other.name;  // Using the this pointer to refer to the current object
        this->age = other.age;
    }
};
