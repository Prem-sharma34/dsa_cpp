#include<iostream>
#include<string>
using namespace std;




string longestPalindrome(string s)
{   
    string result = "";
    int len = 0;
    for(int i = 0 ; i < s.length() ; i++)
    {
        int l = i;
        int r = i;
        while(l >= 0 && r < s.length() && s[l] == s[r])
        {
            if((r - l + 1) > len)
            {
                result = s.substr(l,r+1);
                len = r-l + 1;
            }

            l--;
            r ++;
        }

        // For even length
         l = i;
         r = i+1;
        while(l >= 0 && r < s.length() && s[l] == s[r])
        {
            if((r - l + 1) > len)
            {
                result = s.substr(l, r - l + 1);
;
                len = r-l + 1;
            }

            l--;
            r++;
        }
    }
    
    return result;
}


int main()
{
    string s = "bb";
    cout<<longestPalindrome(s);
}