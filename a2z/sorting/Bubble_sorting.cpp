#include<iostream>
using namespace std;


/* 
For the worst and average time complexity - O(n2)
in best time complexity it's : O(n)
*/

void bubble_sort(int arr[], int n)
{

    for(int i = 0 ; i < n ; i++)
    {
        int didswap = 0;
        for(int j = 0 ; j < n-i ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                 didswap = 1;
            }
        }
        if(didswap==0) break;

    }
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

    bubble_sort(arr,n);

    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}