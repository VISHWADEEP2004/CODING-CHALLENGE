Sample Input 1:
8
7 5 2 11 2 43 1 1
2
Sample Output 1:
2 11 2 43 1 1 7 5
Explanation of Sample Input 1:
Rotate 1 steps to the left: 5 2 11 2 43 1 1 7
Rotate 2 steps to the left: 2 11 2 43 1 1 7 5

OUTPUT:

vector<int> rotateArray(vector<int>arr, int k) {
     int n = arr.size();
    k = k % n; 
    reverse(arr.begin(), arr.begin() + k); 
    reverse(arr.begin() + k, arr.end()); 
    reverse(arr.begin(), arr.end());   
    return arr;
}
