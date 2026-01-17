#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;


// O(sqrt)

bool checkprime(int n)
{
    int count = 0;
   for(int i = 1 ; i * i <= n ; i++)
   {
        if(n % i == 0)
        {
            count++;
            if(n/i != i)
            {
                count++;
            }
        }
   }
   if(count == 2) return true;
   else return false;
   

}

int main()
{
    int n;
    cin>>n;

    cout<<checkprime(n);
    return 0;
}