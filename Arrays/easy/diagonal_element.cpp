/* Print the diagonal elements


Problem statment: 
give an n*n matrix , print its:

principal diagonal elements
second secondary diagonal elements

*/

#include<iostream>

int main()
{
    int a[3][3] = {{1,2,3},{4,5,6}, {7,8,9}};

    std::cout<<"Print the Principal diagonal element"<<std::endl;

    for(int i =0 ; i<3; i++)
    {
        for(int j = 0 ; j<3; j++){
            if(i == j){
                std::cout<<a[i][j]<<" ";
            }
            else{
                std::cout<<"  ";
            }
            

        }
        std::cout<<"\n";
    }

    std::cout<<"Print the Secondary diagonal element"<<std::endl;

    int k = 2;
    for(int i =0 ; i<3; i++)
    {
        std::cout<<a[i][k]<<" "<<std::endl;
        k--;
    }
}