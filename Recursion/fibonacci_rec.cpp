/* Find nth term of fibonancci series

problem statment:
Given an interger n, find the nth term of the fibonacci series;

f(n) = f(n-1) + f(n-2)

0/1 --> 1
2--> 1
1 --> 1

f(3) = f(3-1)+f(3-2)

*/

#include<iostream>

int fibo(int n)
{
    //base condition
    if(n == 1)
    {
        return 1;
    }
    if(n==2)
    {
        return 1;
    }
    

    return fibo(n-1) + fibo(n-2);
}



int main()
{
    int n = 20;
    //Fibonacci series: 1 ,1,2,3,5,8, 13 ...

    std::cout<<"The "<<n<<"the term of the fibonacci series: "<<fibo(n);
}