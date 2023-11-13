Calculate the Power

Problem:
Given two number A and B. Calculate the value of AB. Output may be too large so print the answer modulo 10^9+7.

Input:
Input contains two integers A and B separated by space.

Output:
Print value of AB modulo 10^9+7.

Constraints:
Test File 1 to 5:
1<=A<=10
1<=B<=10

Test File 6 to 10:
1<=A<=106
1<=B<=1010

Sample Input
2 5

Sample Output
32

OUTPUT:

#include <iostream>

using namespace std;

const long long MOD = 1000000007;

long long power(long long base, long long exponent, long long mod) {
    long long result = 1;
    base %= mod;

    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % mod;
        }

        exponent >>= 1;
        base = (base * base) % mod;
    }

    return result;
}

int main() {
    long long a, b;
    cin >> a >> b;
    long long result = power(a, b, MOD);

    cout << result;

    return 0;
}
