#include<iostream>
#include<vector>

using namespace std;



int partition(vector<int>&arr , int low , int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j)
    {
        while(arr[i] <= pivot && i <= high-1)
        {
            i++;
        }
        while(arr[j] >pivot&& j >= low-1)
        {
            j--;
        }

        if(i<j) swap(arr[i] , arr[j]);
    }

    swap(arr[low],arr[j]);

    return j;
}

void quicksort(vector<int> & arr , int low , int high)
{

    if(low < high)
    {
        int pindex = partition(arr , low ,high);

        quicksort(arr,low , pindex-1);
        quicksort(arr,pindex+1, high);
    }
}




int main()
{
     
    vector<int>arr = {2, 4 , 8 ,1};


    quicksort(arr , 0 , arr.size()-1);



    for(int i = 0 ; i < arr.size() ; i++)
    {
        cout<<arr[i]<<" ";

    }
}
