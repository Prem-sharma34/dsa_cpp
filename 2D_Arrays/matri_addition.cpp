/* Give two matrices , the task is to add them

note: matrices can either be square or rectangular but both are of 
same size

*/


#include<iostream>

int main()
{
    int a [2][2] = {{1,2} , {3,4}};
    int b[2][2] = {{3,4} , {5,6}};

    int sum[2][2];

    //Iterate over the rows
    for(int i = 0 ; i<2; i++)
    {
        for(int j = 0 ; j<2; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }


    std::cout<<"This is new matrix obtain by addition two a and b matrices"<<std::endl;
    for(int i = 0 ; i<2; i++)
    {
        for(int j = 0 ; j<2; j++)
        {
           std::cout<< sum[i][j]<<" "; 
        }
        std::cout<<"\n";
    }
}