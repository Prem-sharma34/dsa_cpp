#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> rotateArray(vector<int>&nums, int k)
{

    if(nums.size() >= 2)
    {
            // first reverse the arr
        reverse(nums.begin() , nums.end());

        reverse(nums.begin() , nums.begin() + k);
        reverse(nums.begin()+k , nums.end() );

    }
   
   


    return nums;
}


int main()
{
    vector<int> nums = {-1};

    int k = 2;
    vector<int> newarr = rotateArray(nums , k);

    for(int i = 0 ; i < newarr.size() ; i ++)
    {
        cout<<newarr[i] << " ";
    }

    


}