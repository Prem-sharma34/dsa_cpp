#include<iostream>
#include<vector>
using namespace std;

int merge(vector<int>&arr , int low , int mid , int high)
{
    vector<int>temp;
    int left = low;
    int right = mid+1;

    int cnt = 0;
    while(left <= mid && right <= high)
    {
        if(arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            cnt += (mid -left + 1);
            right++;
        }
    }

    while(left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }


    while(right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }


    for(int i = low ; i <= high ; i++)
    {
        arr[i] = temp[i-low];
    }

    return cnt;

}


int mergesort(vector<int>&arr ,  int low , int high)
{
    int cnt = 0;
    if(low == high)
    {
        return cnt;
    }

    int mid = (low + high)/2;

    cnt += mergesort(arr , low , mid);
    cnt += mergesort(arr , mid+1, high);

    cnt += merge(arr , low , mid , high);
    return cnt;
}




int main()
{
    
    vector<int>arr = {5,3,2,4,1};


    int count = mergesort(arr , 0 , arr.size()-1);



    for(int i = 0 ; i < arr.size() ; i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;

    cout<<count<<endl;

}