#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<limits.h>

using namespace std;

class Solution {
public:

    int sol(vector<int>& nums , int k)
        {
            int sum = 0;
        for(int i = 0 ; i < nums.size() ; i++)
            {
                sum += ceil((double)nums[i]/k);
            }
            return sum;
    }
    int minimumK(vector<int>& nums) {
       int n = nums.size();

        int maxi_element = *max_element(nums.begin() , nums.end()) + 10;

        int result = maxi_element;

        int low = 1 , high = maxi_element;
        while (low <= high)
        {

            int mid = low + (high - low)/2;
            int res = sol(nums, mid);

            if(res <= (long long)mid * (long long)mid)
            {
                result = min(result,mid);
                high = mid -1;
            }else
            {
                low = mid +1;
            }
        }
        
        return result;
    }
};



int main()
{
    vector<int>arr = {1,1};

    Solution solution;

    int result = solution.minimumK(arr);
    cout<<result<<endl;
}