// To check a number is palindrome or not

#include<iostream>
#include<string>
#include<algorithm>


bool palindrome(int x)
{
    std::string str = std::to_string(x);
    std::string str_rev = str;
    int n = str.length();
    if(n== 1 || n == 0)
    {
        return true;
    }else{
        std::reverse(str_rev.begin(),str_rev.end());
        if(str == str_rev){
            return true;
        }else{
            return false;
        }

    }
    
}


int main()
{
    int x = 10;
    std::cout<<palindrome(x);
}