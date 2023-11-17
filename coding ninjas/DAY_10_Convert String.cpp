Sample Input 1 :
3
I love programming
they are playing cricket
good to see you
Sample Output 1 :
I Love Programming
They Are Playing Cricket
Good To See You
Explanation of The Sample Input 1:
For the first test case:
Given string is “I love programming” we will convert every letter after space to uppercase to give the output as ”I Love Programming”.

For the second test case:
Given string is “they are playing cricket” we will convert every letter after space to uppercase to give the output as  “They Are Playing Cricket”. 

For the third test case:
Given string is “good to see you” we will convert every letter after space to uppercase to give the output as “Good To See You”. 
Sample Input 2 :
3
why you are confused
Its a good day to be here
go and do your work
Sample Output 2 :
 Why You Are Confused
 Its A Good Day to Be Here
 Go And Do Your Work

  OUTPUT:

#include <bits/stdc++.h> 
string convertString(string str) 
{
	 bool makeUpper = true;
    
    for (char& c : str) {
        if (makeUpper && isalpha(c)) {
            c = toupper(c);
            makeUpper = false;
        } else if (c == ' ') {
            makeUpper = true;
        }
    }
    
    return str;
}
