#include<iostream>
#include<map>
#include<vector>

using namespace std;

vector<int> twosum(vector<int>&arr , int sum)
{
    map<int , int>mpp;
    for(int i = 0 ; i < arr.size() ; i++)
    {
        int rem = sum - arr[i];
        if(mpp.find(rem) != mpp.end())
        {
            return {i , mpp[rem]};
        }else{
            mpp[arr[i]] = i;
        }
    }

    return {-1 , -1};
}

int main()
{
   vector<int> arr = {3,2,4};
   int k = 6;

   vector<int>result = twosum(arr,k);

   cout<<"[ ";
   for(int i = 0 ; i < result.size() ; i++)
   {
    cout<<result[i]<<" ";
   
   }
    cout<<"]"<<endl;
}