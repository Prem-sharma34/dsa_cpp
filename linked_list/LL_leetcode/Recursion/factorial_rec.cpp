/* find factorial of a number


Problem statment:
Given a number n, find it's factorial using recursion

n = 4
---> 4 * 3 * 2 * 1


--> n * factorial(n);
fa(5) - 5 *fac(4);
*/

#include<iostream>


int factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }

    return n*factorial(n-1); // check this tomorrow , why we return it.
}

int main()
{
    int n = 4;

    std::cout<<"The factorial of number "<<n<<" is: "<<factorial(n);
}