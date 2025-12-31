/* 
Printing the element of an matrix:
To iterate over the rows

Then excess the element and print it





*/


#include<iostream>



int main()
{

    int a[5][4] = {{1,2,3,7},{4,5,10,6},{7,8,9,8},{1,3,4,2}, {2,3,19,20}};


    for(int i = 0; i< 5; i++){
        for(int j = 0 ; j<4 ; j++)
        {
            std::cout<<a[i][j]<< " ";
        }
        std::cout<<std::endl;
    }

    
}