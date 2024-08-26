#include "Shoe.cpp"
#include "Customer.cpp"

int main() {
    // Creating an object of the Shoe class
    Shoe shoe1;
    shoe1.setDetails("Nike", "Sneakers", 42);
    shoe1.displayDetails();

    // Creating an object of the Customer class
    Customer customer1;
    customer1.setDetails("John Doe", 30);
    customer1.displayDetails();

    return 0;
}
