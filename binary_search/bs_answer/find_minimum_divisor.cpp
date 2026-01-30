#include<iostream>
#include<vector>
#include<limits.h>
#include<cmath>
#include<algorithm>

using namespace std;


int sol(vector<int>&arr , int el)
{
        int sum = 0;

        for(auto i : arr)
        {
            double division = ceil((double)i/(double)el);
            sum += division; 
        }
       
        return sum;
}

int min_element(vector<int>&arr , int thres)
{
    int maxelement = *max_element(arr.begin() , arr.end());
    int result = INT_MAX;
    int low = 1 , high = maxelement;

    while(low <= high)
    {
        int mid = low + (high - low)/2;
       
            if(sol(arr , mid) <= thres)
            {
                result = min(result, mid);
                high = mid -1;
            }else 
            {
                low = mid +1;
            }

        }
    return result;
}


int main()
{
        vector<int>arr = {19};
        int thres = 5;

        cout<<min_element(arr , thres)<<endl;



}