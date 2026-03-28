/* Print array elements


problem statement:

Given an array of integers , print all it's elements using recursion


*/

#include<iostream>


void printArray(int a[], int n, int i)
{
    if(i == n)
    {
        return;
    }
    std::cout<<a[i]<< " ";
    printArray(a,n,i+1);
}

int main()
{
    int a[] = {3,2,4,1,5};
    int n = sizeof(a)/sizeof(a[0]);

    printArray(a,n,0);
}