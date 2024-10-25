#include <iostream>
#include <string>
using namespace std;

class Shoe {
protected:
    string brand;
    string type;
    int size;
    static int totalShoes;

public:
    Shoe(string brand = "", string type = "", int size = 0) {
        this->brand = brand;
        this->type = type;
        this->size = size;
        totalShoes++;
    }

    
    ~Shoe() {
        totalShoes--;
    }

    static int getTotalShoes() {
        return totalShoes;
    }

    virtual void setDetails(string brand, string type, int size) {
        this->brand = brand;
        this->type = type;
        this->size = size;
    }

    virtual void displayDetails() {
        cout << "Brand: " << brand << ", Type: " << type << ", Size: " << size << endl;
    }
};

int Shoe::totalShoes = 0;

class Sneaker : public Shoe {
public:
    Sneaker(string brand = "", int size = 0) : Shoe(brand, "Sneaker", size) {}

    void displayDetails() override {
        cout << "Sneaker - Brand: " << brand << ", Size: " << size << endl;
    }
};

class Boot : public Shoe {
public:
    Boot(string brand = "", int size = 0) : Shoe(brand, "Boot", size) {}

    void displayDetails() override {
        cout << "Boot - Brand: " << brand << ", Size: " << size << endl;
    }
};
