#include<iostream>
#include<string>

using namespace std;


class Solution {
public:

    int val(char c)
        {
             switch(c)
             {
            case 'I' : return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L':return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
         }
         return 0;
        }


    int romanToInt(string s) {
        int n = s.size();
        int sum = 0;
        int prev = 0;
        for(int i = 0 ; i < n ; i++)
        {
            int curr = val(s[i]);
            if(curr > prev)
            {
                    sum +=curr - prev*2;
            }else
            {
                sum += curr;
            }

            prev = val(s[i]);
        }
        
        return sum;
    }
};