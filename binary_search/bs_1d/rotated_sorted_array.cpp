#include<iostream>
#include<vector>
using namespace std;

int rotated_sorted(vector<int>& arr , int n , int x)
{
    int low = 0 , high = n-1;

    while(low <= high)
    {
        int mid = (low+high)/2;

        if(arr[mid] == x) return mid;

        if(arr[low] <= arr[mid])
        {
            if(arr[low] <= x && x <= arr[mid])
            {
                high = mid -1;
            }else
            {
                low = mid +1;
            }
        }
        else
        {
            if(arr[mid] <= x && x <= arr[high])
            {
                low = mid +1;
            }else
            {
                high = mid -1;
            }
        }
    }

    return -1;
}


int main()
{
    vector<int> arr = { 1, 2, 3,3,5, 7 , 8 , 9};
    int x = 8;

    cout<<rotated_sorted(arr,arr.size(),x);

}