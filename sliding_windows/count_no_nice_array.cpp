#include<iostream>
#include<vector>

using namespace std;


class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
            int n = nums.size();
            int cnt = 0;
            
            for(int i = 0 ; i < n ; i++)
            {
                int oddn = 0;

                for(int j = i ; j < n ; j++)
                {
                    if(nums[j] % 2 == 1) oddn++;

                    if(oddn == k) cnt++;
                }
                
            }

            return cnt;
    }
};



int main()
{
    Solution sl;
    vector<int> arr = {};
    int k = 6064;
    cout<<sl.numberOfSubarrays(arr , k)<<endl;
}