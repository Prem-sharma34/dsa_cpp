#include<iostream>
#include<string>
#include<limits.h>


using namespace std;


int myAtoi(string s)
{
    long long result = 0;   
    int n = s.size();
    int sign = 1;
    int i = 0;

    while (i < n && s[i] == ' ') i++;

    
    if (i < n && (s[i] == '+' || s[i] == '-')) {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }

   
    while (i < n && isdigit(s[i])) {
        result = result * 10 + (s[i] - '0');

        if (sign * result <= INT_MIN) return INT_MIN;
        if (sign * result >= INT_MAX) return INT_MAX;
        
        i++;
    }

    return (int)(sign * result);
}

int main()
{
    string s = "-91283472332";

    cout<<myAtoi(s)<<endl;
}