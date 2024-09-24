#include <iostream>
#include <string>

using namespace std;

class Shoe {
public:
    string brand;
    string type;
    int size;
    
    static int totalShoes; 
    Shoe() {
        totalShoes++; 
    }

    ~Shoe() {
        totalShoes--; 
    }

    static int getTotalShoes() {
        return totalShoes;
    }

    void setDetails(string brand, string type, int size) {
        this->brand = brand;
        this->type = type;
        this->size = size;
    }

    void displayDetails() {
        cout << "Brand: " << this->brand << ", Type: " << this->type << ", Size: " << this->size << endl;
    }
};

// Initialize the static variable
int Shoe::totalShoes = 0;
