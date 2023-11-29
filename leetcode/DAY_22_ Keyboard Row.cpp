 Keyboard Row:

Given an array of strings words, return the words that can be typed using letters of the alphabet on only one row of American keyboard like the image below.

In the American keyboard:

the first row consists of the characters "qwertyuiop",
the second row consists of the characters "asdfghjkl", and
the third row consists of the characters "zxcvbnm".

 

Example 1:

Input: words = ["Hello","Alaska","Dad","Peace"]
Output: ["Alaska","Dad"]
Example 2:

Input: words = ["omk"]
Output: []
Example 3:

Input: words = ["adsdf","sfd"]
Output: ["adsdf","sfd"]

  OUTPUT:

  class Solution {
public:
    bool compare(string word, string key){
        bool ans = false;
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        for(int i=0;i<word.size();i++){   
              for(int j=0;j<key.size();j++){  
                  if(word[i] == key[j]){   
                      ans = true;
                      break;
                  }
                  else 
                    ans = false;
              }
              if(ans == false) 
                return false;
         }
         return true;
    }
    vector<string> findWords(vector<string>& words) {
        string first = "qwertyuiop";
        string second = "asdfghjkl";
        string third = "zxcvbnm";
        vector<string> ans;
        for(int i=0;i<words.size();i++){
             if(compare(words[i],first)) 
                ans.push_back(words[i]);
             if(compare(words[i],second))
                 ans.push_back(words[i]);
             if(compare(words[i],third)) 
                ans.push_back(words[i]);
        }
        return ans;
    }
};
