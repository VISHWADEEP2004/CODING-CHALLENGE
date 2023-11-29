Sample Input 1:
1
13 7
Sample Output 1:
2
Explanation of sample input 1:
For the first test case,

The binary representation of 13 is 1101.
The binary representation of 7 is 0111.
So, we will change the 2nd and the 4th bit from the right to convert B into A.
Hence, the answer is 2. 

  OUTPUT:

  #include <bits/stdc++.h> 
int numberOfFlips(int a, int b)
{
    int count = 0;
    int xorResult = a ^ b;
    while (xorResult) {
        count += xorResult & 1;
        xorResult >>= 1;
    }

    return count;
}

