/* Remove all adjancent duplicates

Problem statement:

You are given a string a consisting of lowercase Englishh letter. 
A duplicate removal consists of choosing two ajdacent and equal letter sand removing them.

we repeatedly make duplicate removals on s untilw e no longer can. Return 
the final string after all such duplicate removals have been made.


example:alignas
input: s = "abbaca"
Output: "ca"


s = abbaca 
--> remove bb
--> aaca
--> remove double a
---> ca is the answer
*/

#include<iostream>
#include<stack>
#include<string>



int main()
{
    std::string s;
    std::cout<<"Enter the string: ";
    std::cin>>s;
    std::stack<char> stk;

    for(char c: s)
    {
        if(!stk.empty()&& stk.top() == c)
        {
            stk.pop();
        }else
        {
            stk.push(c);
        }

    }

    std::stack<char> stk2;
    std::string result = "";

    char c;
    while(!stk.empty())
    {
        c = stk.top();
        stk.pop();

        stk2.push(c);
    }

    while(!stk2.empty())
    {
        result += stk2.top();
        stk2.pop();
    }

    std::cout<<"The result is: "<<result;
}