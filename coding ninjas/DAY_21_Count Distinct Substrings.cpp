Count Distinct Substrings:

Sample Input 1 :
2
sds
abc
Sample Output 1 :
6
7
Explanation of Sample Input 1 :
In the first test case, the 6 distinct substrings are { ‘s’,’ d’, ”sd”, ”ds”, ”sds”, “” }

In the second test case, the 7 distinct substrings are {‘a’, ‘b’, ‘c’, “ab”, “bc”, “abc”, “” }.
Sample Input 2 :
2
aa
abab
Sample Output 2 :
3
8
Explanation of Sample Input 2 :
In the first test case, the two distinct substrings are {‘a’, “aa”, “” }.

In the second test case, the seven distinct substrings are {‘a’, ‘b’, “ab”, “ba”, “aba”, “bab”, “abab”, “” }

  OUTPUT:

  #include<set>
int countDistinctSubstrings(string &s)
{
    int n = s.length();
    set<string> substring;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            substring.insert(s.substr(i,j));
        }
    }
    substring.insert("");
    return substring.size();
}
