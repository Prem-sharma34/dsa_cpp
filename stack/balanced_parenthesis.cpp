/* Balanced parenthesis

Problem statement:
Given an experessino string,write a program to examine whether the pairs and the 
order of "(",")" are correct in the given expression.

return 1 if balanced else return 0

example:
input s = "((((()))))"
output: 1

*/
#include<string>
#include<iostream>
#include<stack>

bool balancePara(std::string s)
{
    std::stack<char> stack;
    for(char c: s)
    {
        if(stack.size() != 0 && stack.top() == '(' &&  c == ')')
        {
            stack.pop();
        }
        else
        {
            stack.push(c);
        }
        
    }

    if(stack.empty())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    std::string s = "(()";
    
    std::cout<<balancePara(s);
}