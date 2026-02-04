#include<iostream>
#include<vector>
#include<limits.h>



using namespace std;


int maxArea(vector<int>& arr)
{
    int n = arr.size();
    int result = INT_MIN;

    int left = 0;
    int right = n-1;

    while(left<right)
    {
        int difference = right -left;
        int containerwater = (min(arr[left],arr[right]))*difference;

        result = max(result , containerwater);

        if(arr[left]== arr[right]) left++;
        else if(arr[left]> arr[right]) right--;
        else left++;
    }

    return result;
}


int main()
{
    vector<int>arr = {1,8,6,2,5,4,8,3,7};

    cout<<maxArea(arr)<<endl;
}
