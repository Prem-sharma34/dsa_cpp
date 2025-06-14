// Given an array of interger, find the Greatest/Maximum of all its 
// elements


#include<iostream>

int main()
{
    int a[5] = {1, 4, 19, 15, 7}; // 19

    int max = a[0]; // we know whatever will be max element in the array , it will present in the array
    
    for(int i = 0; i<5 ; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }

    std::cout<<"The maximum element in the array is: "<<max <<std::endl;
}