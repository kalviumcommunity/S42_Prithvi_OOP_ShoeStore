#include <iostream>
#include <string>

using namespace std;

class Shoe {
protected:
    string brand;
    string type;
    int size;

public:
    Shoe() : brand("Unknown"), type("Unknown"), size(0) {}  
    Shoe(string brand, string type, int size) : brand(brand), type(type), size(size) {}

    virtual void displayDetails() = 0; 

    virtual ~Shoe() {}   
};

class Sneaker : public Shoe {
public:
    Sneaker() : Shoe() {}  
    Sneaker(string brand, int size) : Shoe(brand, "Sneaker", size) {}

    void displayDetails() override {
        cout << "Sneaker - Brand: " << brand << ", Size: " << size << endl;
    }
};

class Boot : public Shoe {
public:
    Boot() : Shoe() {}
    Boot(string brand, int size) : Shoe(brand, "Boot", size) {}

    void displayDetails() override {
        cout << "Boot - Brand: " << brand << ", Size: " << size << endl;
    }
};

class Sandal : public Shoe {
public:
    Sandal() : Shoe() {}
    Sandal(string brand, int size) : Shoe(brand, "Sandal", size) {}

    void displayDetails() override {
        cout << "Sandal - Brand: " << brand << ", Size: " << size << endl;
    }
};
