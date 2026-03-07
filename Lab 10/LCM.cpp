#include <iostream>

// Function to compute the greatest common divisor (GCD)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to compute the least common multiple (LCM)
int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}
    
int main() {
    int x, y;
    std::cout << "Enter two integers: ";
    std::cin >> x >> y;
    std::cout << "LCM of " << x << " and " << y << " is " << lcm(x, y) << std::endl;
    return 0;
}