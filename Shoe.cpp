#include <iostream>
#include <string>

using namespace std;

// Base class for all shoes
class Shoe {
protected:
    string brand;
    string type;
    int size;

public:
    Shoe(string brand, string type, int size) : brand(brand), type(type), size(size) {}

    string getBrand() const { return brand; }
    string getType() const { return type; }
    int getSize() const { return size; }

    virtual void displayDetails() {
        cout << "Brand: " << brand << ", Type: " << type << ", Size: " << size << endl;
    }

    virtual ~Shoe() {} // Virtual destructor to support polymorphism
};

// Separate class for displaying shoe details (SRP applied)
class ShoeDisplay {
public:
    static void displayDetails(Shoe* shoe) {
        shoe->displayDetails();
    }
};

// Derived classes
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

// using the ocp concept
class Formal : public Shoe {
public:
    Formal(string brand, int size) : Shoe(brand, "Formal", size) {}

    void displayDetails() override {
        cout << "Formal Shoe - Brand: " << brand << ", Size: " << size << endl;
    }
};
