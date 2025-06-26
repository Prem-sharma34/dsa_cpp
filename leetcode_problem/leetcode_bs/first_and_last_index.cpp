/* Find first and last position of element in sorted array

-- non-decreasing order 
--- return first and last occarance of element
-- not find return [-1,-1]

*/
#include<iostream>
#include<vector>


int first_binarySearch(std::vector<int> & nums,int n , int left , int right, int k )
    {
        int  result = -1;
        while(left <= right)
        {
        int mid = left + (right - left);
        
        if(nums[mid] == k)
        {
            result = mid;
            right = mid -1 ;
        }else if(nums[mid] > k)
        {
            right = mid - 1;
        }else
        {
            left = mid + 1 ;
        }
        }
        return result;
    }

    int last_binarySearch(std::vector<int> & nums,int n , int left , int right, int k )
    {
        int  result = -1;
        while(left <= right)
        {
        int mid = left + (right - left);
        
        if(nums[mid] == k)
        {
            result = mid;
            left = mid + 1 ;
        }else if(nums[mid] > k)
        {
            right = mid -1;
        }else
        {
            left = mid +1 ;
        }
        }
        return result;
    }


std::vector<int> searchRange(std::vector<int>& nums, int target) 
{
        int n = nums.size();
        int left = 0;
        int right = n -1;
        int first = first_binarySearch(nums,n , left ,  right,  target );
        int last = last_binarySearch(nums, n ,  left ,  right,  target );
        
        return {first , last};

        
}

int main()
{
    std::vector<int> nums = {1,2,3,4,5,6,7,8,8,9,10};
    int target = 8;

    for(int val: searchRange(nums,target))
    {
        std::cout<<val<<" ";
    }
   
}