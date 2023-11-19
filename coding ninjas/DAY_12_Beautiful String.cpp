Sample Input 1 :
2
0000
1010
Sample Output 1 :
2
0
Explanation of Sample Input 1 :
For the first test case:
The two beautiful strings that can be formed from the given ‘STR’ 
are “1010” and “0101”. Ninja can transform ‘STR’ to “1010” by 
performing the following operations:
Replace ‘0’ at index 0 by ‘1’.
Replace ‘0’ at index 2 by ‘1’.

Ninja can transform ‘STR’ to “0101” by performing the following 
operations:
Replace ‘0' at index 1 by ‘1’.
Replace ‘0’ at index 3 by ‘1’.

The minimum number of operations in transforming ‘STR’ to either of the two beautiful strings is 2.

For the second test case:
Given ‘STR’ is already beautiful so the minimum number of operations required is 0.
Sample Input 2 :
2
01011
1001
Sample Output 2 :
1
2
Explanation of Sample Input 2 :
For the first test case:
The two beautiful strings that can be formed from the given ‘STR’ are “10101” and “01010”. Ninja can transform ‘STR’ to “10101” by performing the following operations:
Replace ‘0’ at index 0 by ‘1’.
Replace ‘1’ at index 1 by ‘0’.
Replace ‘0’ at index 2 by ‘1’
Replace ‘1’ at index 4 by ‘0’.

Ninja can transform ‘STR’ to “01010” by performing the following operations:
Replace ‘1’ at index 4 by ‘0’.

The minimum number of operations in transforming ‘STR’ to beautiful is the minimum of the above two which is 1.

For the second test case:
The two beautiful strings that can be formed from the given ‘STR’ are “1010” and “0101”. Ninja can transform ‘STR’ to “1010” by performing the following operations:
Replace ‘0’ at index 2 by ‘1’.
Replace ‘1’ at index 3 by ‘0’.

Ninja can transform ‘STR’ to “0101” by performing the following operations:
Replace ‘0’ at index 0 by ‘1’.
Replace ‘1’ at index 1 by ‘0’.

The minimum number of operations in transforming ‘STR’ to either of the two beautiful strings is 2.


OUTPUT:

int makeBeautiful(string str) {
	int count1 = 0, count2 = 0;
    int n = str.size();

    for (int i = 0; i < n; ++i) {
		
        if (i % 2 == 0) {
            if (str[i] != '0') {
                count1++;
            } else {
                count2++;
            }
        } else {
            if (str[i] != '1') {
                count1++;
            } else {
                count2++;
            }
        }
    }

    return min(count1, count2);
}
