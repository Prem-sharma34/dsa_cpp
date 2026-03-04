#include<iostream>
#include<string>
#include<unordered_map>
#include<climits>

using namespace std;


class Solution {
public:
    int beautySum(string s) {
            int sum = 0;
            int n = s.size();
            
            for(int i = 0 ; i < n ; i++ )
            {
               
                unordered_map<char,int>mpp;
             
                for(int j = i ; j < n ; j++)
                {
                    mpp[s[j]]++;

                    int maxelement =INT_MIN;
                    int minelement = INT_MAX;

                    for(auto it: mpp)
                    {
                        maxelement = max(maxelement , it.second);
                        minelement = min(minelement , it.second);
                    }
                        
                   sum += (maxelement-minelement);
                    
                    
                }
                
            }

            return sum;
    }
};


int main()
{
    Solution sol;

    string s = "aabcb";
    cout<<sol.beautySum(s)<<endl;
}

