Problem
You have been given a String S. You need to find and print whether this string is a palindrome or not. If yes, print "YES" (without quotes), else print "NO" (without quotes).

Input Format
The first and only line of input contains the String S. The String shall consist of lowercase English alphabets only.

Output Format
Print the required answer on a single line.

Constraints 

Note
String S consists of lowercase English Alphabets only.


OUTPUT:

#include <bits/stdc++.h>
using namespace std;

int main() {
   string s;
	cin >> s;

    string reversed = s;
    reverse(reversed.begin(), reversed.end());

    if (s == reversed) {
       cout << "YES" << std::endl;
    } else {
        cout << "NO" << std::endl;
    }

    return 0;
}
