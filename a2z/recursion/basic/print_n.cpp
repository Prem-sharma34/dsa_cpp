#include<iostream>

using namespace std;

void f(int i , int n)
{
    if(i > n )
    {
        return;
    }

    cout<<"Prem"<<endl;

    f(i+1 , n);
}

// It will have O(n) tc and O(n) space complexity.
int main()
{
    int n ;
    cin>>n;
    int i = 0;
    f(i , n);

}