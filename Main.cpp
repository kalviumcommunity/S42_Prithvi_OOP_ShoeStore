#include "Shoe.cpp"
#include "Customer.cpp"

int main() {
    Shoe shoes[3];

    shoes[0].setDetails("Nike", "Sneakers", 42);
    shoes[1].setDetails("Adidas", "Boots", 40);
    shoes[2].setDetails("Puma", "Sandals", 38);

    for (int i = 0; i < 3; ++i) {
        shoes[i].displayDetails();
        shoes[i].printShoeType();  
    }

    Customer customers[2] = {
        Customer("John Doe", 30),
        Customer("Jane Smith", 25)
    };

    for (int i = 0; i < 2; ++i) {
        customers[i].displayDetails();
        customers[i].checkEligibilityForDiscount();  
    }

    cout << "Total number of shoes: " << Shoe::getShoeCount() << endl;
    cout << "Total number of customers: " << Customer::getCustomerCount() << endl;

    return 0;
}
