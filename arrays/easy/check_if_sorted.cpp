#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



/* 

B[i] == A[(i+x) % A.length]


Example 1:

Input: nums = [3,4,5,1,2]
Output: true
Explanation: [1,2,3,4,5] is the original sorted array.
You can rotate the array by x = 2 positions to begin on the element of value 3: [3,4,5,1,2].


*/

// Brute force for this question.


bool check(vector<int>& nums)
{
  int n = nums.size();
    if (n <= 1) {
        return true; 
    }
    
    int index = 0;
    
    
    for(int i = 0 ; i < n - 1 ; i++) 
    {
        if(nums[i] <= nums[i+1]) 
        {
            
        }else
        {
           
            index = i + 1;
            break;
        }

    }

   
    int x = n - index; 

    
    vector<int>temp = nums;
    sort(temp.begin() , temp.end());

    for(int i = 0 ; i < n ; i++)
    {
        
        if( nums[i] != temp[(i + x) % n])
        {
            return false;
        }
    }
   
    return true;

}

int main()
{
    vector<int>nums = {6};
    cout<<check(nums)<<endl;

}