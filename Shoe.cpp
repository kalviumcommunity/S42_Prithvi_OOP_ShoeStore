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

    void setDetails(string b, string t, int s) {
        brand = b;
        type = t;
        size = s;
    }

    // Public getter methods for protected members
    string getBrand() const { return brand; }
    string getType() const { return type; }
    int getSize() const { return size; }
};

// Separate class for displaying shoe details (SRP implementation)
class ShoeDisplay {
public:
    static void displayDetails(Shoe* shoe) {
        cout << "Brand: " << shoe->getBrand() 
             << ", Type: " << shoe->getType() 
             << ", Size: " << shoe->getSize() << endl;
    }
};

// Sneaker subclass inheriting Shoe
class Sneaker : public Shoe {
public:
    Sneaker() : Shoe() {}
    Sneaker(string brand, int size) : Shoe(brand, "Sneaker", size) {}
};

// Boot subclass inheriting Shoe
class Boot : public Shoe {
public:
    Boot() : Shoe() {}
    Boot(string brand, int size) : Shoe(brand, "Boot", size) {}
};

// Sandal subclass inheriting Shoe
class Sandal : public Shoe {
public:
    Sandal() : Shoe() {}
    Sandal(string brand, int size) : Shoe(brand, "Sandal", size) {}
};
