#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotate(vector<int>& nums, int k) 
{
    /* 
    nums = [1,2,3,4,5,6,7], k = 3
            [5,6,7,1,2,3,4]

            temp = [4,5,6,7]

    */

    k = k % nums.size();

    reverse(nums.begin() , nums.end()-k);
    reverse(nums.end()-k , nums.end());
    reverse(nums.begin(),nums.end());


    
}


int main()
{
    vector<int>nums = {1,2,3,4,5,6,7};
    int k = 3;

    rotate(nums,k);


    for(int i = 0 ; i < nums.size() ; i++)
    {
        cout<<nums[i]<<" ";
    }

}