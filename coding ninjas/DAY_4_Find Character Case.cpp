Find Character Case

Sample Input 1:
2
A
t
Sample Output 1:
1
0
Explanation For Sample Input 1:
For sample case 1, ‘A’ is an uppercase letter, hence output is 1.
For sample case 2, ‘t’ is a lowercase letter, hence output is 0.
Sample Input 2:
2
#
P
Sample Output 2:
-1
1
Explanation For Sample Input 2:
For sample case 1, ‘#’ is not an alphabet, hence output is -1.
For sample case 2, ‘P’ is an uppercase letter, hence output is 1.


  OUTPUT:

  #include <bits/stdc++.h> 

int findCase(char ch) {
    int result;
    if (isalpha(ch)) {
        if (isupper(ch))
            result = 1;
        else if (islower(ch))
            result = 0;
    } else {
        result = -1;
    }
    return result;
}

