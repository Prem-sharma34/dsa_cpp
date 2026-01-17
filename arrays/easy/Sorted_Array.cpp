/* Search in a Sorted Matrix

Problem Statement:

Given an n*n matrix and an integer x, find the position of x
in the matrix if it is present.

Otherwise, print "Element not found"

Note: Every row and column of the matrix is sorted in increasing order.
        1 2 3
        4 5 6
        7 8 9 
This is the matrix which is sorted row as well as column wise 
in increasing orders

*/

#include<iostream>

int main()
{
        int a[3][3] = {{1, 2, 3} , {4, 5, 6} , {7,8,9}};

        int x = 100;
        int flag = 0;

        for(int i = 0 ; i < 3; i++)
        {
            for(int j = 0 ; j < 3; j++)
            {
                if(a[i][j] == x)
                {
                    flag = 1;
                    std::cout<<"The element "<<x<<" is present: "<<std::endl;
                    std::cout<<"At row number: "<<i<<" And column: "<<j<<std::endl;
                }
                
            }
        }
        if(flag == 0){
        std::cout<<"Element doesn't exist"<<std::endl;

        }
}