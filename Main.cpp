#include "Shoe.cpp"
#include "Customer.cpp"

int main() {
    Sneaker sneaker1("Nike", 42);
    Boot boot1("Adidas", 40);
    Sandal sandal1("Puma", 38);

    ShoeDisplay::displayDetails(&sneaker1);
    ShoeDisplay::displayDetails(&boot1);
    ShoeDisplay::displayDetails(&sandal1);

    PremiumCustomer premium1("John Doe", 30);
    RegularCustomer regular1("Jane Smith", 25);

    premium1.displayDetails();
    regular1.displayDetails();

    DiscountEligibilityChecker::checkDiscountEligibility(&premium1);
    DiscountEligibilityChecker::checkDiscountEligibility(&regular1);

    return 0;
}
