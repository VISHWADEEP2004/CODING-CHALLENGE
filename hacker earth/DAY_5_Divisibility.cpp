Problem
You are provided an array of size that contains non-negative integers. Your task is to determine whether the number that is formed by selecting
the last digit of all the N numbers is divisible by 10.

Note: View the sample explanation section for more clarification.

Input format

First line: A single integer N denoting the size of array A
Second line: N space-separated integers.
Output format

If the number is divisible by 10 then print "Yes" . Otherwise, print "No" 

Sample Input
5
85 25 65 21 84
Sample Output
No

Explanation
Last digit of 85 is 5
Last digit of 25 is 5
Last digit of 65 is 5
Last digit of 21 is 1
Last digit of 84 is 8
Therefore the number formed is 55518  which is not divisible by 10.


  OUTPUT:

  #include <iostream>
using namespace std;

int main() {
    int N, sum = 0;
    cin >> N;

    long data[N];
    for (int i = 0; i < N; i++) {
       cin >> data[i];
    }

    for (int i = 0; i < N; i++) {
        if (data[N - 1] % 10 == 0 && data[i] != 0) {
            sum = 1;
            break;
        }
    }

    if (sum == 1)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}

