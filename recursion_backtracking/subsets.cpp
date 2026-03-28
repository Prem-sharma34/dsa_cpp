#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

    void generate(int i , vector<int>&nums,vector<int>&temp , vector<vector<int>>&ans)
    {
        if(i >= nums.size() )
        {
            ans.push_back(temp);
            return;
        }

        temp.push_back(nums[i]);
        generate(i+1 , nums,temp,ans);
        temp.pop_back();
        generate(i+1,nums,temp,ans);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        vector<vector<int>>ans;

        generate(0, nums , temp , ans);

        return ans;
    }
};
