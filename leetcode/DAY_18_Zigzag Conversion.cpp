Zigzag Conversion:

The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given a number of rows:

string convert(string s, int numRows);
 

Example 1:

Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"
Example 2:

Input: s = "PAYPALISHIRING", numRows = 4
Output: "PINALSIGYAHRPI"
Explanation:
P     I    N
A   L S  I G
Y A   H R
P     I
Example 3:

Input: s = "A", numRows = 1
Output: "A"

  OUTPUT:

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.length()) {
            return s;
        }
        
        string result(s.length(), ' ');
        int index = 0;
        int step = 2 * (numRows - 1);
        
        for (int i = 0; i < numRows; ++i) {
            for (int j = i; j < s.length(); j += step) {
                result[index++] = s[j];
                if (i != 0 && i != numRows - 1) {
                    int mid = j + step - 2 * i;
                    if (mid < s.length()) {
                        result[index++] = s[mid];
                    }
                }
            }
        }
        
        return result;
    }
};
