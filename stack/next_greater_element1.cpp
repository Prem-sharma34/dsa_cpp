#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int index(vector<int>&arr,int x)
    {
      int index = -1;
      for(int i= 0 ; i <arr.size() ; i++)
      {
        if(arr[i] == x){
          index = i;
          break;
          
        }
      }

      if(index == arr.size()) return -1;
      for(int i = index ; i < arr.size() ; i++)
      {
        if(arr[i] > x) return arr[i];
      }
      return -1;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
          int n = nums1.size();
          int m = nums2.size();
          vector<int>ans;
          for(int i = 0 ; i < n ; i++)
          {
              int indx = index(nums2,nums1[i]);
              ans.push_back(indx);
              
          }
      return ans;
    }
};


int main()
{
  vector<int>n1 = {1,3,5,2,4};
  vector<int>n2 = {6,5,4,3,2,1,7};
  Solution sol;
  vector<int> ans = sol.nextGreaterElement(n1 , n2);
  for(int i : ans)
  {
    cout<<i<<" ";
  }
  cout<<endl;

  return 0;
}
