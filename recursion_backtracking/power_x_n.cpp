#include<iostream>
#include<limits.h>


using namespace std;


double fn(double result,double x , int n)
{
    if(n==0)
    {
        return 1/result;
    }
    result = x*result;
    return fn(result,x,n+1);
}

double fp(double result,double x , int n)
{
    if(n<1)
    {
        return result;
    }
    result = x*result;
    return fp(result,x,n-1);
}


int main()
{
    double x =2.00000;
    int n = -2;
    double result = 1;

    if(n>0)
    {
        cout<<fp(result,x,n)<<endl;

    }
    else
    {
        cout<<fn(result,x,n)<<endl;
        
    }
}