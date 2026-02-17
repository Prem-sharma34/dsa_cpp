#include<iostream>
#include<string>
#include<cctype>

using namespace std;


class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size() == 1) return true;

        string result = "";

        for(auto i : s)
        {
            if(isalnum(i))
            {
                result += tolower(i); 
            }
        }

        int l = 0 , r =result.size()-1;

        while(l<= r)
        {
            if(result[l] != result[r])
            {
                cout<<result<<endl;
                return false;
            }
                l++;
                r--;

        }
        cout<<result<<endl;
        return true;

    }
};

int main()
{

    string s ="A man, a plan, a canal: Panama";

    Solution sol;

    cout<<sol.isPalindrome(s)<<endl;
}
