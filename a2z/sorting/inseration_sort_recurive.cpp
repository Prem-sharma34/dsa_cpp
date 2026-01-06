#include<iostream>
using namespace std;



// This is the inseration sort implementated using recusion
void rec_inseration(int arr[] , int i , int n)
{
    if(i==n)
    {
        return;
    }

    int j = i;
    while(j > 0 && arr[j-1] > arr[j])
    {
        swap(arr[j-1],arr[j]);
        j--;
    }
    
    rec_inseration(arr , i+1 , n);
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
    
    rec_inseration(arr, 0 , n);

    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}