 Remove All Adjacent Duplicates In String:

Example 1:

Input: s = "abbaca"
Output: "ca"
Explanation: 
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".
Example 2:

Input: s = "azxxzy"
Output: "ay"

  OUTPUT:

class Solution {
public:
    string removeDuplicates(string s) {
         string unique="";
        int index=0;
        while(index < s.length()){
          if(unique.length()>0 and unique[unique.length()-1]==s[index]){
            unique.pop_back();
          }
          else{
            unique.push_back(s[index]);
          }
          index++;
        }
        return unique;
    }
};
