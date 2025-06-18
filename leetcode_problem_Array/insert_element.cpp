/* Search  insertion Position */


#include<iostream>
#include<vector>


int insert_element(std::vector<int>&nums,int target)
{
    int n = nums.size();
    int insert;
    int last; 

        for(int i =0 ; i<n ; i++)
        {
            if(nums[i] == target)
            {
                return i;
            }
            
        }
        last = nums[n-1];

        if(target > last)
        {
            return n;
        }else
        {

          for(int i =0; i<n; i++)
            {
                if(nums[i]<target && nums[i+1] > target)
                {
                    return i+1;
                }
            }      
           
        }
        return 0;
}

int main()
{
    std::vector<int> nums = {3,2,2,3};
    int target = 3;

    std::cout<<insert_element(nums,target);
}