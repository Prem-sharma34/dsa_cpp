#include<iostream>

int main()
{
    int a[5] = { 2, 5, 7, 3,9};

    int b[5];

    // Traverse on the array b
    int j = 0;

    // To traverse on the array a
    for(int i = 4; i>=0; i--){
        b[j] = a[i];
        j++;

    }

    for(int i = 0 ; i<5; i++)
    {
        std::cout<<b[i]<<" ";
    }

}


/*
# Reverse an Array-Part 1

problem statmenet:alignas

Give an array of N integers, reverse it, can use extra space if required


*/
