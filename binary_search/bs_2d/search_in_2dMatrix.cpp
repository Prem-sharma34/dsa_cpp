#include<iostream>
#include<vector>

using namespace std;


// this will work only if last row last element is smaller than current row first element. 
//
bool searchMatrix(vector<vector<int>>& matrix, int target)
{
  int n = matrix.size();
  int m = matrix[0].size();
  
  int row = 0 , col = m-1;

  while(row < n && col >=0)
  {
    if(matrix[row][col] == target ) return true;
    else if(matrix[row][col] < target) row++;
    else col--;
  }

return false;
}
int main()
{
    vector<vector<int>> a = {{{1,3,5,7},{10,11,16,20},{23,30,34,60}}};

    int k = 5;

    cout<<searchMatrix(a,k);
}
