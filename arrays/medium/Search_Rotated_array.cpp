#include<iostream>
#include<vector>
using namespace std;



// Input: nums = [4,5,6,7,0,1,2], target = 0

 int search(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0 , right = n-1;

        while(left <= right)
        {
            int mid = left +(right-left)/2;

            if(nums[mid] == target)
            {
                return mid;
            }       
            if(nums[left] <= nums[mid])
            {
                if(target > nums[mid] || target < nums[left])
                {
                    left = mid + 1;
                }else
                {
                    right = mid - 1;
                }
            }else
            {
                if(target < nums[mid] || target >nums[right])
                {
                    right = mid - 1;
                }else
                {
                    left = mid +1;
                }
            }

        }

        return -1;


    }


int main()
{   
    vector<int>nums = {4,5,6,7,0,1,2};
    int target = 0;

    cout<<search(nums,target);


}