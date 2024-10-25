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

    virtual void displayDetails() {
        cout << "Brand: " << brand << ", Type: " << type << ", Size: " << size << endl;
    }
};

class Sneaker : public Shoe {
public:
    Sneaker() : Shoe() {}  
    Sneaker(string brand, int size) : Shoe(brand, "Sneaker", size) {}  
};

class Boot : public Shoe {
public:
    Boot() : Shoe() {} 
    Boot(string brand, int size) : Shoe(brand, "Boot", size) {}  
};

class Sandal : public Shoe {
public:
    Sandal() : Shoe() {} 
    Sandal(string brand, int size) : Shoe(brand, "Sandal", size) {} 
};
