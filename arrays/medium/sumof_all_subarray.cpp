#include<iostream>
#include<vector>
using namespace std;



long totalsum(vector<int>&arr)
{
   int n = arr.size();

   long result = 0;

   for(int i = 0 ; i <n ; i++)
   {
        result += (i+1)*(n-i)*arr[i];
   }

    return result;
}

int main()
{
    vector<int>arr = {1, 4, 5, 3, 2};

    cout<<totalsum(arr)<<endl;
}