/* Print array elements in reverse order


problem statement:

Given an array of integers , print all it's elements in reverse using recursion


*/

#include<iostream>


void printArray(int a[], int n, int i)
{
    if(i == -1)
    {
        return;
    }
    std::cout<<a[i]<< " ";
    printArray(a,n,i-1);
}

int main()
{
    int a[] = {3,2,4,1,5};
    int n = sizeof(a)/sizeof(a[0]);

    printArray(a,n,n-1);
}