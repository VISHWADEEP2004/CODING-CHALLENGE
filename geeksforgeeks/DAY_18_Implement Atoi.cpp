Implement Atoi

Input:
str = 123
Output: 123
Example 2:

Input:
str = 21a
Output: -1
Explanation: Output is -1 as all
characters are not digit only.

OUTPUT:

 int atoi(string str) {
        int result = 0;
        int sign = 1;
        int i = 0;
        
        while (str[i] == ' ') {
            i++;
        }
        
        if (str[i] == '-') {
            sign = -1;
            i++;
        }
        
        for (; str[i] != '\0'; ++i) {
            if (str[i] >= '0' && str[i] <= '9') {
                result = result * 10 + (str[i] - '0');
            } else {
                return -1; 
            }
        }
    
        return sign * result;
    }
