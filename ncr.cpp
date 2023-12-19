In his high school, Ross was taught permutations and combinations. He found it very difficult then but now, he has grown fond of it. He likes calculating the different ways of combining certain things, basically a permutation.
As he likes solving these mathematical questions, in each of the questions, he is faced with a challenge of finding out factorials of very large numbers and Ross does not like it. He just wants to be given values and solve the question. So he asked you for help to find out the following:
nCr where n and r are numbers given by Ross to you
nCr is defined as n! / (r! x (n-r)!)
Here, n! denotes the factorial of a number. Also, you have to calculate this number as modulo m.

Input Specification:

input1: The number n.
input2: The number r.
input3: The number m.
Output Specification:
The value of nCr%m.

Example 1:
input1: 3
input2: 2
input3: 1000000009
Output: 3




#include <iostream>
using namespace std;

// Function to calculate factorial modulo m
int factorialMod(int n, int m) {
    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact = (1LL * fact * i) % m; // Use long long to prevent overflow in intermediate multiplication
    }
    return fact;
}

// Function to calculate modular inverse using extended Euclidean algorithm
int modInverse(int a, int m) {
    int m0 = m, t, q;
    int x0 = 0, x1 = 1;

    if (m == 1) return 0;

    // Apply extended Euclid Algorithm
    while (a > 1) {
        q = a / m;
        t = m;
        m = a % m, a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }

    // Make x1 positive
    if (x1 < 0) x1 += m0;

    return x1;
}

// Function to calculate nCr modulo m
int nCrMod(int n, int r, int m) {
    if (r == 0 || r == n) return 1;

    // Calculate factorials modulo m
    int numerator = factorialMod(n, m);
    int denominator = (1LL * factorialMod(r, m) * factorialMod(n - r, m)) % m;

    // Calculate modular inverse of denominator
    int inv = modInverse(denominator, m);

    // Calculate nCr modulo m
    int result = (1LL * numerator * inv) % m;
    return result;
}

int main() {
    int n, r, m;
    cout << "Enter n, r, and m: ";
    cin >> n >> r >> m;

    int result = nCrMod(n, r, m);
    cout << "nCr modulo m is: " << result << endl;

    return 0;
}
