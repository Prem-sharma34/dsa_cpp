/* 

# Reverse an array - part 2

Problem statmenet:abs

Given an array of N integers, reverse it. 
Note: do this without using any extra space.


After observation
1 is getting swap 5 
same for 2 with 4

we are done when we reach the middle element of the array


l = 0               r = n -1 
we need to keep swaping , until and less reach middle element;
*/


#include<iostream>


int main()
{

    int a[5] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);

    int l = 0;
    int r = n-1;

    while(l < r)
    {
        // We are just doing a simple swap of start with last , so on
        int temp = 0;

        temp = a[r];
        a[r] = a[l];
        a[l] = temp;

        l++;
        r--;
    }

    for(int i = 0 ; i<n; i++){
        std::cout<<a[i]<<" ";
    }


}