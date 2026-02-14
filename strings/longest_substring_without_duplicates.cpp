#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {

        int n = s.length();

        if (n < 1)
            return 0;
        else if (n == 1)
            return 1;

        unordered_map<char, int> mpp;
        int len = 0;
        for(int i = 0 ; i < n ; i++)
        {

            for(int j = i ; j < n ; j++)
            {
                if(mpp[s[j]] == 1) break;

                mpp[s[j]] =1 ;

                int l = j-i +1;

                len = max(len,l);
            }
            mpp.clear();
           
        }
       

        return len;
    }
};

int main()
{
    Solution sol;
    string s = "dvdf";

    int len = sol.lengthOfLongestSubstring(s);

    cout << len << endl;
}