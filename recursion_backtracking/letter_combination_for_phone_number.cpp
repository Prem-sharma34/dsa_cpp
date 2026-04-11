#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    void solve(string &digits, vector<string> &ans, string &temp, unordered_map<char, string> &mp, int index)
    {
        if (index >= digits.size())
        {
            ans.push_back(temp);
            return;
        }

        char ch = digits[index];
        string str = mp[ch];

        for (int i = 0; i < str.size(); i++)
        {
            temp.push_back(str[i]);
            solve(digits, ans, temp, mp, index + 1);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits)
    {
        if (digits.size() == 0)
            return {};
        unordered_map<char, string> mp = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}};
        vector<string> ans;
        string temp = "";
        solve(digits, ans, temp, mp, 0);

        return ans;
    }
};

int main()
{
    Solution sol;

    string s;
    cout<<"enter digits: ";
    cin>>s;
    vector<string>ans = sol.letterCombinations(s);
    cout<<"[ ";
    for(auto i : ans)
    {
        cout<<i<<" ";
    }
    cout<<"]";
    cout<<endl;
}
