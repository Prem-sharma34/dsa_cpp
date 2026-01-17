#include<iostream>
#include<vector>

using namespace std;


/* This is using dutch national flag algorithm: */

void sort_color(vector<int>& arr)
{
    int low = 0 , mid = 0 , high = arr.size()-1;

    while(mid <= high)
    {
        if(arr[mid]==0)
        {
            swap(arr[mid] , arr[low]);
            low++; 
            mid++;
        }
        else if(arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid] , arr[high]);
            high--;
        }
    }

}


int main()
{
    vector<int>arr={2,0,1};

    sort_color(arr);

    for(auto it:arr)
    {
        cout<<it<<" ";
    }
}