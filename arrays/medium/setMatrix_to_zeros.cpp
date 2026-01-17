#include<iostream>
#include<vector>

using namespace std;


vector<vector<int>> set_zeros(vector<vector<int>>&arr , int n , int m)
{
    int row[n] , col[m];

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(arr[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }


    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(row[i] == 1 || col[j] == 1)
            {
                arr[i][j] = 0;
            }
        }
    }

    return arr;
}

vector<vector<int>> optimal_set_zeros(vector<vector<int>>&matrix , int n , int m)
{
    //int row[n] = {0} ; -> matrix[0][..]
    //int col[m] = {0} ; -> matrix[..][0]

    int col0 = 1;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(matrix[i][j] == 0)
            {
                // mark the i-th row
                matrix[i][0] = 0;
                // mark the j-the col
                if(j!=0)
                {
                    matrix[0][j] = 0;
                }
                else
                    col0 = 0;
            }
        }
    }

        for(int i = 1 ;i <n ; i++)
        {
            for(int j = 1; j < m ; j++)
            {
                if( matrix[i][j] != 0)
                {
                    // check for col && row
                    if(matrix[0][j] == 0 || matrix[i][0] == 0)
                    {
                        matrix[i][j] = 0;
                    }
                }
            }
        }

        if(matrix[0][0] == 0)
        {
            for(int j = 0 ; j < m ; j++) matrix[0][j] = 0;
        }
        if(col0 ==0)
        {
            for(int i = 0 ; i < n ; i++)
            {
                matrix[i][0] = 0;
            }
        }
    



    return matrix;
}



#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to set entire row and column to 0 if an element in the matrix is 0 (Optimal O(1) space)
    void setZeroes(vector<vector<int>>& matrix) {
        // Get dimensions of matrix
        int m = matrix.size();
        int n = matrix[0].size();

        // Flag to track if first row should be zeroed
        bool firstRowZero = false;
        // Flag to track if first column should be zeroed
        bool firstColZero = false;

        // Check if first row has any zero
        for (int j = 0; j < n; j++) {
            if (matrix[0][j] == 0) {
                firstRowZero = true;
                break;
            }
        }

        // Check if first column has any zero
        for (int i = 0; i < m; i++) {
            if (matrix[i][0] == 0) {
                firstColZero = true;
                break;
            }
        }

        // Mark rows and columns in first row/column
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Set matrix cells to zero based on markers
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Handle first row
        if (firstRowZero) {
            for (int j = 0; j < n; j++) {
                matrix[0][j] = 0;
            }
        }

        // Handle first column
        if (firstColZero) {
            for (int i = 0; i < m; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};

int main() {
    Solution obj;
    vector<vector<int>> matrix = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    obj.setZeroes(matrix);
    for (auto row : matrix) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
