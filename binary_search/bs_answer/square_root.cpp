#include<iostream>
#include<vector>

using namespace std;

int square_root(int n)
{
  

    int low = 1, high = n;
    int ans = 0;

    while(low <= high)
    {
        long long mid = low + (high - low)/2;   

        long long sq = mid * mid;
    
        if(sq <= (long long) n)
        {
            ans = mid;
            low = mid + 1;
        }else
        {
            high = mid-1;
        }
    }  
    
    return ans;
}


int main()
{
    int n = 28;
    cout<<square_root(n);
}