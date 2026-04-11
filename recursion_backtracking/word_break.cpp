#include<iostream>
#include<vector>
#include<unordered_set>
#include<string>

using namespace std;


class Solution {
public:

    bool find(string s , unordered_set<string>&st , int index , string check)
    {
        if(index >=s.size())
        {
           if(check.empty()) return true; 

            return false;
        }

        for(int i = index ; i < s.size() ; i++)
        {
                check += s[i];
                if(st.find(check) != st.end()) {
                    if(find(s,st,i+1 , ""))
                    {
                        return true;
                    }
                    
                }
        }

        return false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
            if(s.empty() && wordDict.size() == 0) return true;
            unordered_set<string>st(wordDict.begin() , wordDict.end());
            return find(s , st , 0 , "");
    }
};



int main()
{
    string s = "aaaaaaa";
    vector<string>l = {"aaaa","aaa"};
    Solution sol;

    cout<<sol.wordBreak(s,l)<<endl;

}