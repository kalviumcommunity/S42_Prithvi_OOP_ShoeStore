#include "Shoe.cpp"
#include "Customer.cpp"

void displayCustomerDiscountEligibility(Customer* customer) {
    customer->displayDetails();
    if (customer->isEligibleForDiscount()) {
        cout << "Eligible for Discount." << endl;
    } else {
        cout << "Not Eligible for Discount." << endl;
    }
}

int main() {
    // Shoes
    Sneaker sneaker1("Nike", 42);
    Boot boot1("Adidas", 40);
    Sandal sandal1("Puma", 38);

    sneaker1.displayDetails();
    boot1.displayDetails();
    sandal1.displayDetails();

    // Customers
    PremiumCustomer premium1("John Doe", 30);
    RegularCustomer regular1("Jane Smith", 20);

    displayCustomerDiscountEligibility(&premium1);
    displayCustomerDiscountEligibility(&regular1);

    return 0;
}
