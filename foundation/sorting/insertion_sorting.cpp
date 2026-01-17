#include<iostream>
using namespace std;


/* 
For the worst and average time complexity - O(n2)
in best time complexity it's : O(n)
*/

void insertion_sort(int arr[], int n)
{

    for(int i = 0 ; i < n ; i++)
    {
        int j = i;

        while(j > 0 && arr[j-1] > arr[j])
        {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;

            j--;
        }

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

    insertion_sort(arr,n);

    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}