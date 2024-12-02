#include <iostream>
#include <string>
using namespace std;

class Shoe {
protected:
    string brand;
    string type;
    int size;

public:
    Shoe(string brand, string type, int size) : brand(brand), type(type), size(size) {}
    virtual ~Shoe() {}

    virtual void displayDetails() {
        cout << "Brand: " << brand << ", Type: " << type << ", Size: " << size << endl;
    }
};

class Sneaker : public Shoe {
public:
    Sneaker(string brand, int size) : Shoe(brand, "Sneaker", size) {}
};

class Boot : public Shoe {
public:
    Boot(string brand, int size) : Shoe(brand, "Boot", size) {}
};

class Sandal : public Shoe {
public:
    Sandal(string brand, int size) : Shoe(brand, "Sandal", size) {}
};
