Find triplets with zero sum:

class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        sort(arr, arr+n);
    
        for (int i = 0; i < n - 2; ++i) {
            int left = i + 1;
            int right = n - 1;
    
            while (left < right) {
                int currentSum = arr[i] + arr[left] + arr[right];
                if (currentSum == 0) {
                    return true; 
                } 
                else if (currentSum < 0) {
                    left++;
                } 
                else {
                    right--;
                }
            }
        }
        return false;
    }
};
