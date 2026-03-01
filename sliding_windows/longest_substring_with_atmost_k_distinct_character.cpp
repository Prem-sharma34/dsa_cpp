#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int kDistinctChar(string &s, int k)
    {
        int n = s.size();
        int maxlen = 0;
        unordered_map<char,int>mp;

        int l=0,r=0;

        while(r<n)
        {
            mp[s[r]]++;

            while(mp.size() > k)
            {
                mp[s[l]]--;

                if(mp[s[l]] == 0)
                {
                    mp.erase(s[l]);
                }
                l++;
            }

            maxlen = max(maxlen,r-l+1);
            r++;
        }

        return maxlen;
    }
};

int main()
{
    Solution sol;
    string s = "abcddefg";
    int k = 3;

    cout<<sol.kDistinctChar(s,k)<<endl;

    return 0;
}