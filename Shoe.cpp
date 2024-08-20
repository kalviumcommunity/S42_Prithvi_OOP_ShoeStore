#include <iostream>
#include <string>

using namespace std;

class Shoe {
public:
   
    string brand;
    string type;
    int size;

    
    void setDetails(string b, string t, int s) {
        brand = b;
        type = t;
        size = s;
    }

    void displayDetails() {
        cout << "Brand: " << brand << ", Type: " << type << ", Size: " << size << endl;
    }
};
