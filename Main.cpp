#include "Shoe.cpp"
#include "Customer.cpp"

int main() {
    Sneaker sneaker("Nike", 42);
    Boot boot("Timberland", 40);
    Shoe basicShoe("Puma", "Sandals", 38);

    sneaker.displayDetails();
    boot.displayDetails();
    basicShoe.displayDetails();

    cout << "Total Shoes: " << Shoe::getTotalShoes() << endl;

    PremiumCustomer premiumCustomer("John Doe", 30);
    RegularCustomer regularCustomer("Jane Smith", 22);

    premiumCustomer.displayDetails();
    regularCustomer.displayDetails();

    cout << "Total Customers: " << Customer::getTotalCustomers() << endl;

    return 0;
}
