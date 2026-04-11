#include<iostream>
#include<string>
#include<vector>

using namespace std;



class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans; 

        vector<string>ds;
        pal(0 , s , ds , ans);

        return ans;
    }

    void pal(int index , string s , vector<string>&ds,vector<vector<string>>&ans)
    {
        if(index == s.size())
        {
            ans.push_back(ds);
            return;
        }

        for(int i = index ; i < s.size() ; i++)
        {
            if(isvalid(s, index , i))
            {
                ds.push_back(s.substr(index , i-index+1));
                pal(i+1 , s , ds , ans);
                ds.pop_back();
            }
        }
    }

    bool isvalid(string s , int start , int end)
    {
        while(start <= end)
        {
            if(s[start++] != s[end--])return false;
        }
        return true;
    }
};


int main()
{
    Solution sol;
    string s;
    cout<<"Enter string: ";
    cin>>s;

    vector<vector<string>>ans = sol.partition(s);

    for(auto i :ans)
    {
        for(auto j : i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}




