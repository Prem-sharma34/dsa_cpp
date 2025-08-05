/* 
Print FIFO order using a stack

Given an array of integers , print its elements in FIFO (left to right order ) 
using stack

*/

#include<iostream>
#include<stack>
#include<vector>


int main()
{
    std::vector<int> a = {1 ,3,5, 7,2};

    std::stack<int>s1;
    std::stack<int>s2;

    for(int i = 0 ; i < a.size() ; i++)
    {
        s1.push(a[i]);
    }

    while(!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }

    std::cout<< "the elements of the given array in FIFO order are: ";

    while(!s2.empty())
    {
        std::cout<<s2.top()<<" ";
        s2.pop();
    }

}