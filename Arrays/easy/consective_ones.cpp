#include<iostream>
#include<vector>
using namespace std;


int ones(vector<int>& nums)
{
    int count = 0 ;
    int maxm =0 ;


    for(int i = 0 ; i < nums.size() ; i++)
    {
        if(nums[i] == 1)
        {
            count++;
            maxm = max(maxm , count);
        }
        else
        {
            count = 0;
        }
        
    }
    return maxm;
}

int main()
{
    vector<int>nums = {1,1,0,1,1,1};
    cout<<ones(nums)<<endl;

}