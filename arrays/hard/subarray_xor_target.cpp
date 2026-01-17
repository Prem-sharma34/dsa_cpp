#include<iostream>
#include<vector>
#include<map>


using namespace std;


int subarray_xor(vector<int>&arr , int k)
{
    map<int,int>mpp;
    int xr = 0;
    mpp[xr]++;
    int cnt = 0;
    for(int i = 0 ; i < arr.size() ; i++)
    {
        xr = xr^arr[i];

        int x = xr^k;
        cnt += mpp[x];
        mpp[x]++;
    }

    return cnt;
    
}


int main()
{

    vector<int> arr = {4,2,2,6,2,4};
    int k = 6;

    cout<<subarray_xor(arr,k)<<endl;

}