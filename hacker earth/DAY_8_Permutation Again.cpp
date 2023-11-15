Problem
Given an integer N. Find out the PermutationSum where PermutationSum for integer N is defined as the maximum sum of difference of adjacent elements in all arrangement of numbers from 1 to N.

NOTE: Difference between two elements A and B will be considered as abs(A-B) or |A-B| which always be a positive number.

Input:
First line of input contains number of test case T. Each test case contains a single integer N.

Output:
For each test case print the maximum value of PermutationSum.

Constraints:
1<=T<=10000
1<=N<=105

Sample Input
3
1
2
3

Sample Output
1
1
3

  OUTPUT:

#include <iostream>
#include <vector>

using namespace std;

vector<long long> ar(100001, 0);

void permutationSum() {
    ar[1] = 1;
    ar[2] = 1;
    for (int i = 3; i <= 100000; i++) {
        ar[i] = i - (i % 2) + ar[i - 1];
    }
}

int main() {
    permutationSum();

    int t;
    cin >> t;

    while (t > 0) {
        int n;
        cin >> n;
        cout << ar[n] <<endl;
        t--;
    }

    return 0;
}
