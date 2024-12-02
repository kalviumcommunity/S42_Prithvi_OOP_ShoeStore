#include "Shoe.cpp"
#include "Customer.cpp"

int main() {
    Sneaker sneaker1("Nike", 42);
    Boot boot1("Adidas", 40);
    Sandal sandal1("Puma", 38);
    Formal formal1("Clarks", 44); // New Formal Shoe

    // Display shoe details using the ShoeDisplay class
    ShoeDisplay::displayDetails(&sneaker1);
    ShoeDisplay::displayDetails(&boot1);
    ShoeDisplay::displayDetails(&sandal1);
    ShoeDisplay::displayDetails(&formal1); // Displaying new shoe type

    PremiumCustomer premium1("John Doe", 30);
    RegularCustomer regular1("Jane Smith", 25);
    VIPCustomer vip1("Michael Brown", 45); // New VIP customer

    // Check discount eligibility using the DiscountEligibilityChecker class
    DiscountEligibilityChecker::checkDiscountEligibility(&premium1);
    DiscountEligibilityChecker::checkDiscountEligibility(&regular1);
    DiscountEligibilityChecker::checkDiscountEligibility(&vip1); // Check for VIP customer

    return 0;
}
