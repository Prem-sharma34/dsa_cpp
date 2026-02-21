#include<iostream>
#include<string>
#include<unordered_map>
#include<limits.h>

using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
           int n = s.size();
           int  m = t.size();

           unordered_map<char , int>hash;
           for(auto i : t) hash[i]++;
           int l = 0 , r = 0 , cnt = 0;
           int minlen = INT_MAX;
           int startindex = -1;

           while(r < n)
           {
                // increase count 
                if(hash[s[r]] > 0) cnt++;
                // here we decrease the freq
                hash[s[r]]--;

                while(cnt == m)
                {
                    if(r - l +1 < minlen)
                    {
                        minlen = r -l +1;
                        startindex = l;
                    }

                    // here we decrease the freq
                    hash[s[l]]++;
                    // increase the count
                    if(hash[s[l]] > 0) cnt--;
                    l++;

                }

                r++;
           }

           return startindex == -1 ? "" : s.substr(startindex , minlen);
    }
};



int main()
{
    string s = "ADOBECODEBANC";
    string t = "ABC";

    Solution sol;

    cout<<sol.minWindow(s , t)<<endl;
}