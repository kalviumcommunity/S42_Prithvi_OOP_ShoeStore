#include <iostream>
#include <string>

using namespace std;

class Shoe {
public:
    // Data members
    string brand;
    string type;
    int size;

    // Member functions
    void setDetails(string brand, string type, int size) {
        this->brand = brand;  // Using the this pointer to distinguish between parameter and class member
        this->type = type;    // Using the this pointer
        this->size = size;    // Using the this pointer
    }

    void displayDetails() {
        cout << "Brand: " << this->brand << ", Type: " << this->type << ", Size: " << this->size << endl;
    }
};
