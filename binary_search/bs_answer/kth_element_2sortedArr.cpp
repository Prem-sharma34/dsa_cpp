#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


vector<int>merge(vector<int>&a , vector<int>&b)
{
  int n = a.size();
  int m = b.size();
  vector<int>temp;

  int i = 0 , j = 0;
  while(i < n && j < m)
  {
    if(a[i] <= b[j])
    {
      temp.push_back(a[i]);
      i++;
    }
    else
    {
      temp.push_back(b[j]);
      j++;
    }

  }

  while(i < n){
    temp.push_back(a[i]);
    i++;
  }

  while(j<m)
  {
    temp.push_back(b[j]);
    j++;
  }

  return temp;
}

int kthElement(vector<int> &a, vector<int>& b, int k)
{
  vector<int>arr = merge(a,b);

  int low = 0 , high = *max_element(arr.begin() , arr.end());

  while(low <= high)
  {
    int mid = low + (high - low)/2;

    if(mid == k) return arr[k-1];
    else if(mid > k) high = mid -1;
    else low = mid +1;
  }

  return -1;
  
}


int main()
{
  vector<int> a = {2, 3, 6, 7, 9};
  vector<int> b = {1, 4, 8, 10};
    int k = 5;

  cout<<kthElement(a , b , k)<<endl;
}
