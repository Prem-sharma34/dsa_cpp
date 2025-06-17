// Remove element

#include<iostream>
#include<vector>


int main()
{
    std::vector<int> nums = {3,2,2,3};
    int val = 3;

    int n = nums.size();
    int index = 0;
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(nums[i] != val)
        {
            nums[index] = nums[i];
            count++;
            index++;
        }
    }
    
    std::cout<<count<<std::endl;
}