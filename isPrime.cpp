// Given a number n, determine whether it is a prime number or not.
// Note: A prime number is a number greater than 1 that has no positive divisors other than 1 and itself.

// Examples :

// Input: n = 7
// Output: true
// Explanation: 7 has exactly two divisors: 1 and 7, making it a prime number.
// Input: n = 25
// Output: false
// Explanation: 25 has more than two divisors: 1, 5, and 25, so it is not a prime number.
// Input: n = 1
// Output: false
// Explanation: 1 has only one divisor (1 itself), which is not sufficient for it to be considered prime.
// Constraints:
// 1 ≤ n ≤ 109

#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;   // 0 and 1 are not prime
    if (n == 2) return true;    // 2 is prime
    if (n % 2 == 0) return false; // eliminate even numbers

    // check only odd numbers till sqrt(n)
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n))
        cout << n << " is a Prime number" << '\n';
    else
        cout << n << " is NOT a Prime number" << '\n';

    return 0;
}