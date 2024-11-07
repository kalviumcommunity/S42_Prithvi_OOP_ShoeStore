#include "Shoe.cpp"
#include "Customer.cpp"

int main() {
    Sneaker sneaker1("Nike", 42);
    Boot boot1("Adidas", 40);
    Sandal sandal1("Puma", 38);

    sneaker1.displayDetails();
    boot1.displayDetails();
    sandal1.displayDetails();

    Customer* customers[2];
    customers[0] = new PremiumCustomer("John Doe", 30);
    customers[1] = new RegularCustomer("Jane Smith", 25);

    for (int i = 0; i < 2; ++i) {
        customers[i]->displayDetails();
        customers[i]->checkDiscountEligibility();
        delete customers[i]; 
    }

    return 0;
}
