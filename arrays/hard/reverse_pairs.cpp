#include<iostream>
#include<vector>

using namespace std;


void merge(vector<int>&arr , int low , int mid , int high)
{
    vector<int>temp;
    int left = low;
    int right = mid+1;

    while(left <= mid && right <= high)
    {
        if(arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while(right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low ; i <= high ; i++)
    {
        arr[i] = temp[i-low];
    }

}

int countPairs(vector<int>&arr,int low, int mid , int high)
{
    int right = mid+1; // we are picking or starting from first element right array
    int cnt = 0;

    for(int i = low ; i <= mid ; i++) // this loop to are or standing of the element of left array.
    {
        while(right <= high && arr[i]>2*arr[right])
        {
            right++;
        }
        cnt+=(right -(mid+1));
    }
    return cnt;
}

int mergesort(vector<int>&arr , int low , int high)
{
    int cnt = 0;
    if(low>=high) return cnt;

    int mid = (low+high)/2;

    cnt += mergesort(arr,low , mid);
    cnt += mergesort(arr,mid+1 , high);
    cnt += countPairs(arr , low , mid , high); // we are count we merging 
    merge(arr,low , mid , high);
    return cnt;
}

int team(vector <int> & skill, int n)
{
    return mergesort(skill, 0, n - 1);
}

int main()
{
    vector<int> a = {4, 1, 2, 3, 1};
    int n = 5;
    int cnt = team(a, n);
    cout << "The number of reverse pair is: "
         << cnt << endl;
    return 0;
}