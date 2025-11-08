#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> rotateArray(vector<int>&nums, int k)
{
    int n = nums.size();

     k = k % n;

    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());


    return nums;
}


int main()
{
    vector<int> nums = {1,2,3,4,5,6,7};

    int k = 2;
    vector<int> newarr = rotateArray(nums , k);

    for(int i = 0 ; i < newarr.size() ; i ++)
    {
        cout<<newarr[i] << " ";
    }

    


}