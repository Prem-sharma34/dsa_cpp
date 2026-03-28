#include<iostream>
#include<vector>
using namespace std;



class Solution {
public:

    void generate(vector<int>&nums , vector<vector<int>>&ans , vector<int>&ds , int freq[])
    {
        if(ds.size() == nums.size())
        {
            ans.push_back(ds);
            return;
        }

        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(freq[i] != 1)
            {
                    freq[i] = 1;
                    ds.push_back(nums[i]);
                    generate(nums,ans , ds,freq);
                    freq[i] = 0;
                    ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        int freq[nums.size()];
        for(int i = 0 ; i < nums.size() ; i++) freq[i] = 0;

        generate(nums, ans ,ds,freq);

        return ans;
    }
};


int main()
{
    Solution sol;
    vector<int>nums = {1,2,3};

    vector<vector<int>> ans = sol.permute(nums);

    for(auto a : ans)
    {
        cout<<"[ ";
        for(auto i : a)
        {

            cout<<i<<" ";
        }
        cout<<"]"<<endl;
    }

}