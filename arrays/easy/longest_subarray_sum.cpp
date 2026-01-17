#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;


int total_sub(vector<int>&nums , int k )
{
    int left = 0 , right = 0;
     int maxlen = 0;
     long long sum = 0;
     int n = nums.size();

     while(right < n)
     {

        while(sum > k && left <= right)
        {
            sum -= nums[left];
            left++;
        }

        if(sum == k)
        {
            maxlen++;
        }

        right++;
        if(right < n) sum += nums[right];
     }




     return maxlen;
}

// This is better implementation , remember not the optimal solution.
int subarr(vector<int>& arr , long long k)
{
    map<long long , int> preSumMap;
    long long sum = 0;

    int maxlen = 0;

    for(int i = 0 ; i < arr.size() ; i++)
    {
        sum += arr[i];
        if(sum == k)
        {
            maxlen ++;
        }
        int rem = sum - k;
        if(preSumMap.find(rem) != preSumMap.end())
        {
            maxlen++;
        }

        if(preSumMap.find(sum) == preSumMap.end())
        {
            preSumMap[sum] = i;
        }
    }

    return maxlen;
}


int main(){

    vector<int> arr = {1,2,3};
    long long k = 3;
    int len = subarr(arr , k);
   cout<< len<<endl;
}