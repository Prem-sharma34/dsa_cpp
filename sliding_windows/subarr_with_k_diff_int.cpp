#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:

    int atmost(vector<int>& nums, int k)
    {
        if(k<1) return 0;
        
        int n = nums.size();
        unordered_map<int,int>mp;
        int cnt = 0;

        int l = 0 , r= 0;

        while(r<n)
        {
            mp[nums[r]]++;

            while(mp.size() > k)
            {
                mp[nums[l]]--;

                if(mp[nums[l]]==0)
                {
                    mp.erase(nums[l]);
                }
                l++;
            }
            cnt += (r-l+1);
            r++;
        }

        return cnt;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
            
        return atmost(nums,k) - atmost(nums,k-1);
    }
};



int main()
{
    Solution sol;
    vector<int>arr = {1,2,1,2,3};
    int k = 2;

    cout<<sol.subarraysWithKDistinct(arr,k)<<endl;

    return 0;
}