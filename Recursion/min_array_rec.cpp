/* Find minimum element in an array

Problem statement:

Given an array of integers, print the minimums (smallest) element
in it using recursion.



*/

#include<iostream>

int find_min(int a[], int n , int i,int min)
{
    
    //base condition
    if(i == n)
    {
        return min;
    }
    //task
    min = std::min(min,a[i]);

    //recursive call
    return find_min(a,n,i+1,min);


    
}

int main()
{

    int a[] = {-12,1,1};
    int n = sizeof(a)/sizeof(a[0]);
    int min = a[0];
    std::cout<<"The min of array in the array: "<<find_min(a,n,0,min)<<std::endl;


}