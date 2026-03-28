#include<iostream>
#include<vector>

using namespace std;



class Solution {
public:

    int findpath(vector<vector<int>>&arr , int n , int m , int i , int j , int xrr)
    {
        xrr ^= arr[i][j];
        if(i== n-1 && j == m-1)
        {
            return xrr;
        }

        int right=1e9, down = 1e9;
        
        if(i+1 < n)
        {
            right = findpath(arr , n , m , i+1 , j , xrr);
        }

        if(j+1 < m )
        {
            down = findpath(arr, n , m , i , j+1 , xrr);
        }

        return min(right,down);
    }
    int minCost(vector<vector<int>>& arr) {
        
        int n = arr.size();
        int m = arr[0].size();

        int xrr = 0;

        return findpath(arr , n , m , 0 , 0 , xrr);;
    }
};


int main()
{
    vector<vector<int>>arr = {{1,2},{3,4}};

    Solution sol;

    cout<<sol.minCost(arr)<<endl;

}