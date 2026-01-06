#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;


void printalldivisor(int n)
{
    vector<int> list;

    // O(sqrt(n))

    for(int i = 1; i <= sqrt(n) ; i++) // i * i <= n
    {
        if(n % i == 0)
        {
           list.push_back(i);
            if(n/i != i)
            {
                list.push_back(n/i);
            }


        }
    }

    // in-built sorting function takes 
    // O(n logn) : where n is the factors 

    sort(list.begin() , list.end());


    // this will also take O(n , where n is factors which will be less than actual number)
    for(auto i : list)
    {
        cout<<i<<" ";
    }

}

int main()
{
    int n;
    cin>>n;

    printalldivisor(n);
    return 0;
}