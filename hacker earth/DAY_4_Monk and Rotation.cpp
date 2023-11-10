Monk loves to preform different operations on arrays, and so being the principal of Hackerearth School, he assigned a task to his new student Mishki. Mishki will be provided with an integer array A of size N and an integer K , where she needs to rotate the array in the right direction by K steps and then print the resultant array. As she is new to the school, please help her to complete the task.

Video approach to solve this question: here

Input:
The first line will consists of one integer T denoting the number of test cases.
For each test case:
1) The first line consists of two integers N and K, N being the number of elements in the array and K denotes the number of steps of rotation.
2) The next line consists of N space separated integers , denoting the elements of the array A.

Output:
Print the required array.

Sample Input
1
5 2
1 2 3 4 5
Sample Output
4 5 1 2 3

OUTPUT:

#include <iostream>
#include <vector>

vector<int> rotateArray(const vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n; 

    vector<int> rotatedArray(n);
    for (int i = 0; i < n; ++i) {
        rotatedArray[(i + k) % n] = arr[i];
    }

    return rotatedArray;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n, k;
        cin >> n >> k;

        vector<int> array(n);
        for (int j = 0; j < n; ++j) {
            cin >> array[j];
        }
        vector<int> result = rotateArray(array, k);
        for (int j = 0; j < n; ++j) {
            cout << result[j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
