Shuffle integers:

Input: 
n = 4, arr = {1, 2, 9, 15}
Output:  
1 9 2 15
Explanation: 
a1=1, a2=2, b1=9, b2=15. So the final array will be: a1, b1, a2, b2 = {1,9,2,15}.
Example 2:

Input: 
n = 6 arr = {1, 2, 3, 4, 5, 6} 
Output: 
1 4 2 5 3 6

  OUTPUT:
	void shuffleArray(int arr[],int n)
	{
	    vector<int> res;
	    int i=0,j=n/2;
	    while(i < n/2){
	        res.push_back(arr[i]);
	        res.push_back(arr[j]);
	        i++;
	        j++;
	    }
	    for(int i=0;i<n;i++){
	        arr[i]=res[i];
	    }
	    
	}
