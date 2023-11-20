Nth Fibonacci Number:


Sample Input 1:>
6


Sample Output 1:>
8


Explanation of sample input 1 :>
The number is ‘6’ so we have to find the “6th” Fibonacci number.
So by using the given formula of the Fibonacci series, we get the series:    
[ 1, 1, 2, 3, 5, 8, 13, 21]
So the “6th” element is “8” hence we get the output.


Expected time complexity :>
The expected time complexity is O(n).


Constraints:>
1 <= 'n' <= 10000     
Where ‘n’ represents the number for which we have to find its equivalent Fibonacci number.

Time Limit: 1 second

OUTPUT:

#include<bits/stdc++.h>
using namespace std;


long long findNthFibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    long long a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    cin >> n;

    long long result = findNthFibonacci(n);
    cout << result << std::endl;

    return 0;
}
