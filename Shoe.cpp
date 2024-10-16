#include <iostream>
#include <string>

using namespace std;

class Shoe {
private:
    string brand;
    string type;
    int size;
    static int shoeCount; 

public:
    Shoe() {
        brand = "Unknown";
        type = "Unknown";
        size = 0;
        shoeCount++;
    }

    Shoe(string b, string t, int s) {
        brand = b;
        type = t;
        size = s;
        shoeCount++;
    }

    
    ~Shoe() {
        shoeCount--;  
    }

    static int getShoeCount() {
        return shoeCount;
    }

    void setDetails(string brand, string type, int size) {
        this->brand = brand;
        this->type = type;
        this->size = size;
    }

    void displayDetails() const {
        cout << "Brand: " << brand << ", Type: " << type << ", Size: " << size << endl;
    }

    void printShoeType() const {
        cout << "This is a " << type << " type of shoe." << endl;
    }
};


int Shoe::shoeCount = 0;
