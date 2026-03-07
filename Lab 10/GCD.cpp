#include <iostream>
using namespace std;

// Function to compute GCD using recursion
int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int main() {
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;

    cout << "GCD of " << x << " and " << y << " is " << gcd(x, y) << endl;

    return 0;
}