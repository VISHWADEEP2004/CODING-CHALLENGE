Sample Input 1 :
2
4 1 
4 2
Sample Output 1 :
10
24 
Explanation of the Sample Input 1:
In the first test case, the answer is 10 because all integers between 1 and 4 are 1, 2, 3, and 4. Hence 1 + 2 + 3 + 4 is equal to 10.


In the second test case, the answer is 25 because all integers between 1 and 4 are 1, 2, 3, and 4. Hence 1 * 2 * 3 * 4 is equal to 24.
Sample Input 2 :
2
5 1
5 2 
Sample Output 2 :
15
120

  OUTPUT:

#include <bits/stdc++.h> 
long long int sumOrProduct(long long int n, long long int q)
{
	const int MOD = 1e9 + 7;
    long long int result = 1;

    if (q == 1) {
  
        result = (n % MOD) * ((n + 1) % MOD) / 2;
        result %= MOD;
    } else if (q == 2) {
     
        for (long long int i = 2; i <= n; ++i) {
            result = (result % MOD * i % MOD) % MOD;
        }
    }

    return result;
}
