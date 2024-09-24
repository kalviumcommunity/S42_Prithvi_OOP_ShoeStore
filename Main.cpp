#include "Shoe.cpp"
#include "Customer.cpp"

int main() {
    Shoe* shoes = new Shoe[3];
    Customer* customers = new Customer[2];

    shoes[0].setDetails("Nike", "Sneakers", 42);
    shoes[1].setDetails("Adidas", "Boots", 40);
    shoes[2].setDetails("Puma", "Sandals", 38);

    for (int i = 0; i < 3; ++i) {
        shoes[i].displayDetails();
    }

    customers[0].setDetails("John Doe", 30);
    customers[1].setDetails("Jane Smith", 25);

    for (int i = 0; i < 2; ++i) {
        customers[i].displayDetails();
    }

    cout << "Total Shoes in store: " << Shoe::getTotalShoes() << endl;
    cout << "Total Customers: " << Customer::getTotalCustomers() << endl;

    delete[] shoes;
    delete[] customers;

    return 0;
}
