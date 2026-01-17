#include<iostream>

using namespace std;

// this will have tc-> log(min(a,b)) 
int find_gcd(int a , int b)
{
    while(a > 0 && b > 0)
    {
        if(a > b) a = a % b;
        else b = b % a;
    }
    if(a == 0) return b;
    else return a;
}

int main()
{
    int a,b;

    cin>>a>>b;

    cout<<find_gcd(a , b);

}