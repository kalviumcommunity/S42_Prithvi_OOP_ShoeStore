#include <iostream>
#include <string>

using namespace std;

class Customer {
public:
    
    string name;
    int age;

    
    void setDetails(string name, int age) {
        this->name = name;  
        this->age = age;   
    }

    void displayDetails() {
        cout << "Customer Name: " << this->name << ", Age: " << this->age << endl;
    }

};
