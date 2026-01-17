#include<iostream>
#include<vector>
using namespace std;

int lowerBound(vector<int>& arr , int n , int x)
{
    int low = 0 , high = n -1;

    int ans = n;

    while(low <= high)
    {
        int mid = (low + high)/2;

        if(arr[mid] >= x)
        {
            ans = mid;
            high = mid -1;
        }
        else {
            low = mid + 1;
        }
    }

    return ans;
}


int upperBound(vector<int>& arr , int n , int x)
{
    int low = 0 , high = n -1;

    int ans = n;

    while(low <= high)
    {
        int mid = (low + high)/2;

        if(arr[mid] > x)
        {
            ans = mid;
            high = mid -1;
        }
        else {
            low = mid + 1;
        }
    }

    return ans;
}

pair<int,int>firstandlast(vector<int>&arr , int n , int x)
{
    int lb = lowerBound(arr,n,x);
    if(lb == n || arr[lb] != x) return {-1, -1};
    
    return {lb , upperBound(arr,n,x) -1};
}

int main()
{
    vector<int> arr = { 1, 2, 3,3,5, 7 , 8 , 9};
    int x = 8;
    int n = arr.size();
    
    pair<int,int> ans = firstandlast(arr,n,x);

    cout << ans.first << " " << ans.second << endl;

    
}