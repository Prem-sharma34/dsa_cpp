#include<iostream>
#include<stack>
#include<string>

/* 
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
*/


bool isValid(std::string s)
{
        std::stack<char> st;
        for(char c : s)
        {
            if(st.size() != 0 && st.top() == '(' && c == ')')
            {
                st.pop();
            }else if(st.size() != 0 && st.top() == '{' && c == '}')
            {
                st.pop();

            }else if(st.size() != 0 && st.top() == '[' && c == ']')
            {
                st.pop();
            }else{
                st.push(c);
            }
        }

        if(st.empty())
            return true;
        else
            return false;


}


int main()
{
    std::string s = "()";
    std::cout<<isValid(s);
}