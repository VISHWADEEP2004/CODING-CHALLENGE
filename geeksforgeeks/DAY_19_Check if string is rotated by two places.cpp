Check if string is rotated by two places:

Input:
a = amazon
b = azonam
Output: 
1
Explanation: 
amazon can be rotated anti-clockwise by two places, which will make it as azonam.
Example 2:

Input:
a = geeksforgeeks
b = geeksgeeksfor
Output: 
0
  
Explanation: 
If we rotate geeksforgeeks by two place in any direction, we won't get geeksgeeksfor.
 bool isRotated(string str1, string str2) {
        int n = str1.length();
        int m = str2.length();
    
        if (n != m || n < 2)
            return false;
    
        string clockwise = str2.substr(m - 2) + str2.substr(0, m - 2);
        string anticlockwise = str2.substr(2) + str2.substr(0, 2);
    
        return (str1 == clockwise || str1 == anticlockwise);
    }
