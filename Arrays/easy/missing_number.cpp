#include<iostream>
#include<vector>
using namespace std;


int missingNumber(vector<int>& nums)
{
    int xor1 = 0 , xor2 = 0;
    
    int n = nums.size();
    
    for(int i = 1 ; i <= n ; i++)
    {
        xor1 = xor1 ^ i;
    }

    for(int i = 0 ; i < n ; i++)
    {
        xor2 = xor2 ^ nums[i];
    }

    return xor1 ^ xor2;
}

int main()
{
    vector<int>nums = {9,6,4,2,3,5,7,0,1};
    cout<<missingNumber(nums)<<endl;

}