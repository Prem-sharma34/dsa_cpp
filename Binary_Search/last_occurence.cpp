/*  
Last index of the occurance


a = [1,4,4,4,5]

k = 4 
--> 4

*/

#include<iostream>

int binarySearch(int a[] , int n ,int l , int r , int k)
{
    int result = -1;
    while(l <= r)
    {
        int mid = l + (r - l)/2;
        if(a[mid] == k)
        {
            result = mid;
            l = mid+1;
        }
        else if(a[mid] > k)
        {
            r= mid -1;
        }
        else
        {   
            l = mid+1;
        }
    }
    return result;
}

int main()
{
    int a[] = {1,4,4,4,6,6};
    int k = 6;
    int n = sizeof(a)/sizeof(a[0]);

    int index = binarySearch(a , n , 0 , n-1 , k);
    std::cout<<"The index of the last occurance of the value is: "<<index<<std::endl;
}