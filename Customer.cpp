#include <iostream>
#include <string>

using namespace std;

class Customer {
public:
    string name;
    int age;
    
    static int totalCustomers;  // Static variable to count total number of customers

    // Constructor
    Customer() {
        totalCustomers++;  // Increment totalCustomers when a new Customer object is created
    }

    // Destructor
    ~Customer() {
        totalCustomers--;  // Decrement totalCustomers when a Customer object is destroyed
    }

    // Static member function to get total number of customers
    static int getTotalCustomers() {
        return totalCustomers;
    }

    // Member function to set details of a customer
    void setDetails(string name, int age) {
        this->name = name;
        this->age = age;
    }

    // Member function to display details of a customer
    void displayDetails() {
        cout << "Customer Name: " << this->name << ", Age: " << this->age << endl;
    }
};

// Initialize the static variable
int Customer::totalCustomers = 0;
