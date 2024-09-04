#include <iostream>

// Function prototype
int reduce(int &num, int &denom);

// Helper function to calculate the Greatest Common Divisor (GCD)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int numerator, denominator;

    std::cout << "Enter the numerator: ";
    std::cin >> numerator;
    std::cout << "Enter the denominator: ";
    std::cin >> denominator;

    if (reduce(numerator, denominator) == 1) {
        std::cout << "The reduced fraction is: " << numerator << "/" << denominator << std::endl;
    } else {
        std::cout << "Invalid input: both numbers must be positive." << std::endl;
    }

    return 0;
}

// Function definition
int reduce(int &num, int &denom) {
    // Check for invalid input
    if (num <= 0 || denom <= 0) {
        return 0;
    }

    // Calculate the greatest common divisor (GCD)
    int gcd_value = gcd(num, denom);

    // Reduce the fraction
    num /= gcd_value;
    denom /= gcd_value;

    return 1;
}

