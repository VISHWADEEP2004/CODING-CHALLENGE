 Longest Common Prefix:

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.

  OUTPUT:

class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        string ans="";
        sort(str.begin(),str.end());
        int n=str.size();
        string first=str[0],last=str[n-1];
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i]){
                return ans;
            }
            ans+=first[i];
        }
        return ans;
    }
};
