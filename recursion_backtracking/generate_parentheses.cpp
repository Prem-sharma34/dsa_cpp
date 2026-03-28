#include<iostream>
#include<string>
#include<vector>

using namespace std;


class Solution {
public:
    bool isValid(string s) {
    int balance = 0;
    for (char c : s) {
        if (c == '(') balance++;
        else balance--;
        if (balance < 0) return false;
    }
    return balance == 0;
}

    void generate(int n , vector<string>&ans,string s ,int open , int close)
    {
        if(s.length() == 2*n )
        {
            
            ans.push_back(s);
            
            return;
        }

        if(open < n)
        {
            generate(n , ans , s+'(',open+1,close);
        }

        if(close < open)
        {
            generate(n , ans , s+')',open,close+1);
        }

    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;

        generate(n , ans ,"", 0 , 0);

        return ans;
    }
};



int main()
{
    Solution sol;

    int n = 3;

    vector<string> ans = sol.generateParenthesis(n);

    for(auto s : ans)
    {
        cout<<s<<endl;
    }

}