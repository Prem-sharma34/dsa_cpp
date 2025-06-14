/* 
Given an array of N intergers and a number value, the task is to 
find the number of pairs of intereger in the array whose sum in 
equal given number 
*/


#include<iostream>

int main()
{
    int a[6] = {2,1 , 4, 2, 3, 0}; //2
    int value = 5;

    int count = 0;
    
    for(int i = 0 ; i< 6; i++)
    {
        for(int j = i+1 ; j < 6; j++)
        {
            if(a[i] + a[j] == value)
            {
                count++;
            }
        }
    }

    std::cout<<"The number of pair are: "<<count<<std::endl;
}