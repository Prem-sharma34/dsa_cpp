#include<iostream>
#include<string>
#include<cctype>
#include<limits.h>

using namespace std;


int f(int i , string s , long long result , int sign)
{
    if(i >= s.size() || !isdigit(s[i]))
    {
        return (int)result*sign;
        
    }

    result = result*10 +s[i]-'0';

    if(sign*result<= INT_MIN) return INT_MIN;
    if(sign*result >= INT_MAX) return INT_MAX;

    f(i+1,s,result,sign);

    return f(i+1,s,result,sign);
}



int main()
{
    string s = " -045";

    int i = 0;

    long long result = 0;

    int sign = 1;

    while(s[i] == ' ' && i < s.size())
    {
        i++;
    }

    if(s[i] == '-') 
    {
        sign = -1;
        i++;
    }
    else if(s[i] == '+') 
    {
        sign = 1;
        i++;
    }

    cout<<f(i,s,result,sign)<<endl;
}