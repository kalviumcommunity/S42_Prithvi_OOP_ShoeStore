#include <iostream>
#include <string>

using namespace std;

class Customer {
public:
    
    string name;
    int age;

    void setDetails(string n, int a) {
        name = n;
        age = a;
    }

    void displayDetails() {
        cout << "Customer Name: " << name << ", Age: " << age << endl;
    }
};
