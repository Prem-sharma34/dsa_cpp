#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string mergeCharacters(string s, int k) {
        
        int n = s.size();
        int hash[26];
        for(int i = 0 ; i < 26 ; i++)
        {
            hash[i]=-1;
        }
        int r = 0;
        while (r<n)
        {
            if(hash[s[r]-'a'] != -1)
            {
                if(r-hash[s[r]-'a'] <= k)
                {
                    s.erase(r,1);
                }else
                {
                    hash[s[r]-'a']=r;
                    r++;
                   
                }

            }else
            {
                hash[s[r]-'a'] = r;
                r++;
            }

            n = s.size();
            
        }

        return s;
        
    }
};


int main()
{
    Solution sol;
    string s = "aabca";
    int k = 2;

    cout<<sol.mergeCharacters(s,k)<<endl;
}