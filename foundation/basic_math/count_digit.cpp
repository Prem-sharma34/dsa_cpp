#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;


int count(int n)
{
    int count = 0;

    while(n > 0)
    {
        int lastdigit = n % 10;

        count++;
        n = n/10;
    }

    return count;
}

int logcount(int n)
{
    int count = (int)(log10(n)+1);
    return count;
}

int main()
{
    int n;
    cin>>n;
    int s1 = count(n);
    int s2 = logcount(n);

    cout<<s1<<" "<<s2;
}