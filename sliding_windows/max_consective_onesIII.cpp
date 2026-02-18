#include<iostream>
#include<vector>

using namespace std;

int max_ones(vector<int>&arr , int k)
{
  int n = arr.size();
  int cnt_z = 0;

  int max_len = 0;

  for(int i = 0 ; i < n ; i++)
  {
    for(int j = i+1 ; j < n ;j++)
    {
      for(int k = i ; k <= j ; k++)
      {
        if(arr[k] == 0) 
        {
          cnt_z++;
        }
      }

      if(cnt_z <= k) max_len = max(max_len, j-i+1);
      cnt_z = 0;
    }
  }

  return max_len;
  

  
}


int main()
{
  vector<int> arr = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
  int k = 3;
  cout<<max_ones(arr, k)<<endl;
}
