#include<iostream>
#include<vector> 
#include<algorithm>
#include<limits.h>
using namespace std; 


int kthElement(vector<int> &a, vector<int>& b, int k)
{

  int n = a.size();
  int m = b.size();

  if(n>m) 
  {
    return kthElement(b,a,k);
  }

  int low = max(0 , k-n) , high = n;
  while(low <= high)
  {
    int mid1 = (low + high)/2;
    int mid2 = k - mid1;
    cout<<"mid1: "<<mid1<<" mid2: "<<mid2<<endl;


    int l1 = INT_MIN , l2 = INT_MIN;
    int r1 = INT_MAX , r2 = INT_MAX;

    if(mid1 < n) r1 = a[mid1];
    if(mid2 < m) r2 = b[mid2];

    if(mid1 - 1 >= 0) l1 = a[mid1-1];    
    if(mid2 - 1 >= 0) l2 = b[mid2-1];

  
    if(l1<= r2 && l2<=r1){
      if((mid1 + mid2) == k) return max(l1 , l2);
    } 
    else if(l1 > r2) high = mid1 -1;
    else low = mid1 +1;
  }

  return -1;
 
}


int main()
{
  vector<int> a = {2,3,8,9};
  vector<int> b = {4,5,6,7};
    int k = 4;

  cout<<kthElement(a , b , k)<<endl;
}
