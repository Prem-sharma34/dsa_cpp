#include<iostream>
#include<string>
#include<vector>

using namespace std;


class Solution {
public:
    int characterReplacement(string s, int k) {
                int  n = s.size();

                int maxlen = 0;
              
                for(int i = 0 ; i < n ; i++)
                {   
                  vector<int>freq(26,0);

                  int maxfeq = 0;

                  for(int j = i+1 ; j < n ; j++)
                  {
                    freq[s[j] - 'A']++;

                    maxfeq = max(maxfeq , freq[s[j] - 'A']);

                    int changes = (j-i+1) - maxfeq;

                    if(changes <= k)
                    {
                        maxlen = max(maxlen , j-i+1);
                    }else{
                        break;
                    }
                  }

              }


                    return maxlen;
    }
};


int main()
{
    string s = "ABAB";
    int k = 2;

    Solution sol;

    cout<<sol.characterReplacement(s,k)<<endl;
}