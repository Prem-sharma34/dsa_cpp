#include<iostream>
using namespace std;



// This is the bubble sort recursion
void recb(int arr[] , int i , int n)
{
    if(i==n)
    {
        return;
    }

    int didswap = 1;

    for(int j = 0 ; j <= n ; j++)
    {
        if(arr[j] > arr[j+1])
        {
            swap(arr[j] , arr[j+1]);
            didswap=0;
        }
    }
    
    if(didswap == 1)
    {
        return;
    }
    
    
    recb(arr , i , n-1);
}




int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    
    recb(arr, 0 , n-1);

    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}