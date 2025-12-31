#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;




vector<int>leader(vector<int>&arr)
{
    vector<int>ans;
    int maxi = INT_MIN;

    for(int i = arr.size()-1 ; i >= 0 ; i--)
    {
        if(arr[i] > maxi)
        {
            maxi = arr[i];
            ans.push_back(arr[i]);
        }
    }

    sort(ans.begin() , ans.end());

    return ans;

}

int main()
{
    vector<int>arr = {1,2,3,2};
    vector<int>ans = leader(arr);
    for(auto i: ans)
    {
        cout<<i<<" ";
    }
}