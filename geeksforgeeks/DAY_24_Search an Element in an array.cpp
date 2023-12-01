Search an Element in an array:

Input:
n = 4
arr[] = {1,2,3,4}
x = 3
Output: 2
Explanation: There is one test case 
with array as {1, 2, 3 4} and element 
to be searched as 3.  Since 3 is 
present at index 2, output is 2.

OUTPUT:

int search(int arr[], int N, int X)
    {
        int ind = -1;
        for(int i=0;i<N;i++){
            if(arr[i]==X)
            {
                ind = i;
                break;
            }
        }
        return ind;
        
    }
