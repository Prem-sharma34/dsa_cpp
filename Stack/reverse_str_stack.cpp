/* Reverse a string


Problem statement:


given a string , reverse it using stack
*/

#include<iostream>
#include<string>
#include<stack>



int main()
{
    std::stack<char> st;

    std::string s = "Nudes";

   for(char c: s)// we are using modern c++ for loop , which is usinged to string s
   {
    st.push(c);
   }

   for(int i = 0; i < s.length() ; i++)
   {
     s[i] = st.top();
     st.pop();
   }

   std::cout<<s;



}