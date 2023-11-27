Example 1:

Input: 
N = 3
arr[] = {1, 2, 4}
Output: 
1 2 5
Explanation:
124+1 = 125, and so the Output
Example 2:

Input: 
N = 3
arr[] = {9,9,9}
Output: 
1 0 0 0
Explanation:
999+1 = 1000, and so the output

OUTPUT:

 vector<int> increment(vector<int> arr ,int N) {
        int carry = 1; 
        
    for (int i = N - 1; i >= 0; i--) {
        int sum = arr[i] + carry; 
        arr[i] = sum % 10;

        carry = sum / 10;
    }
    
    if (carry > 0) {
        arr.insert(arr.begin(), carry);
    }

    return arr;
    }
