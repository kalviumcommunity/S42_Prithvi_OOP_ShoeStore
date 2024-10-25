#include "Shoe.cpp"
#include "Customer.cpp"

int main() {
    Sneaker sneaker1("Nike", 42);
    Boot boot1("Adidas", 40);
    Sandal sandal1("Puma", 38);

    sneaker1.displayDetails();
    boot1.displayDetails();
    sandal1.displayDetails();

    PremiumCustomer premium1("John Doe", 30);
    RegularCustomer regular1("Jane Smith", 25);

    premium1.displayDetails();
    regular1.displayDetails();

    premium1.checkDiscountEligibility();
    regular1.checkDiscountEligibility();

    return 0;
}
