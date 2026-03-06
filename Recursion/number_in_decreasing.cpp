/* print numbers in decreasing order

Problem statmenet:

given a numbrer , print all the number from 1 to n in decreasing order
using recursion
*/


#include<iostream>

void printRecursion(int n)
{
    //base condition
    if(n == 0)
    {
        return;
    }
    //task
    std::cout<<n<< " ";

    //recursive call
    printRecursion(n-1);
}

int main()
{
    int n  = 5;
    printRecursion(n);

}