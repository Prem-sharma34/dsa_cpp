/* Reverse a number

Problem statement:
Given a number, reverse it using stack


n = 347
multiply the output with:

3 * 10 p 1 + 4*10 p 1+ 7 *10 p 2; --> 743

*/

#include<iostream>
#include<stack>


int main()
{
    std::stack<int> stk;

    int n = 3892975;
    int c = n;

    while(n!=0)
    {
        int digit = n%10;
        stk.push(digit);
        n = n/10; // n/10;
    }

    int reverse = 0; 
    int mutliplier = 1; 
    int temp = 0; 
    while(!stk.empty())
    {
        int digit = stk.top();
        stk.pop();
        temp = digit*mutliplier;

        reverse+=temp;

        mutliplier*= 10;

    }

    std::cout<<"The reverse of the this "<<c<<" is: "<<reverse;
}