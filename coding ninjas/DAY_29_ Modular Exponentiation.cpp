 Modular Exponentiation:

#include <bits/stdc++.h>

int modularExponentiation(int X, int N, int M) {
	if (N == 0) {
        return 1;
    }

    long long result = 1;
    long long base = X % M;

    while (N > 0) {
        if (N % 2 == 1) {
            result = (result * base) % M;
        }
        base = (base * base) % M;
        N /= 2;
    }

    return (result + M) % M;
}
