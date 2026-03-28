#include<iostream>
#include<string>
#include<vector>
using namespace std;



class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
           
        if(strs.empty()) return "";
        for(int j = 0 ; j < strs[0].size(); j++)
        {
            char ch = strs[0][j];

            for(int i = 1 ; i < strs.size() ; i++)
            {
                if(j == strs[0].size() || ch != strs[i][j])
                {
                    return strs[0].substr(0,j);
                }
            }
            
        }

        return strs[0];
    }   
};




int main()
{
    Solution sol;
    vector<string> s= {"dog","racecar","car"};
    cout<<sol.longestCommonPrefix(s)<<endl;
}