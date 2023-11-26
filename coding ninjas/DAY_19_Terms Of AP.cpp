Terms Of AP:

SEQUENCE: 3*N+2

  Sample Input 1:
2
2
5
Sample Output 1:
5 11
5 11 14 17 23
Explanation For Sample Input 1:
In the first test case, the first number is 5, while the second number cannot be 8 as it is 
divisible by 4, and so, the next number is directly 11 as it is not divisible by 4.

OUTPUT:

#include <bits/stdc++.h> 
#include <vector>
vector < int > termsOfAP(int x) {
      vector<int> result;
      result.push_back(5);
      for(int i=2;i<=x;i++){
          int num = 3*i+2;
          if(num%4!=0){
              result.push_back(num);
          }
          else{
              x++;
          }
      }
    return result;
}
    
