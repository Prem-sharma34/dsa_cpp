#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
            int n = nums.size();
            vector<int>mpp(n);
            int suffix = 1;

            for(int i = n-1 ; i >= 1 ; i--)
            {
                suffix = suffix * nums[i];
                mpp[i] = suffix;
            }
            int i = 0;
            int prefix =1;
         
            for(int i = 0 ; i < n ; i++)
            {
                int res = 1;
                if(i+1 <= n-1)
                {
                    res = prefix*mpp[i+1]; 
                }else
                {
                    res = prefix;
                }

                prefix = prefix*nums[i];
                nums[i] = res;
            }

            return nums;
    }
};

int main() 
{
    Solution sol;
    vector<int>arr = {1,2,3,4};
    vector<int>res = sol.productExceptSelf(arr);

    for(auto a: res)
    {
        cout<<a<<" ";
    }
    
}
