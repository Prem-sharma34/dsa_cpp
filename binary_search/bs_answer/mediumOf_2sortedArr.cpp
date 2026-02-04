#include<iostream>
#include<vector>
#include<cmath>

using namespace std;


vector<int> merge(vector<int>& arr1, vector<int>& arr2)
{
    vector<int>temp;
    int m = arr1.size();
    int n = arr2.size();
    int i = 0 ,j = 0;
    while(i < m && j < n)
    {
        if(arr1[i] <= arr2[j])
        {
            temp.push_back(arr1[i]);
            i++;
        }else
        {
            temp.push_back(arr2[j]);
            j++;
        }
    }

    while(i < m)
    {
        temp.push_back(arr1[i]);
        i++;
    }

    while(j < n)
    {
        temp.push_back(arr2[j]);
        j++;
    }

    return temp;
}


double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
{
    int m = nums1.size();
    int n = nums2.size();
        
    vector<int>arr = merge(nums1,nums2);

    int total = arr.size();

    if(total%2 == 1)
    {
        return (double)arr[total/2];
    }else
    {
        int med2= total/2;
        int med1 = med2-1;

        double result = (arr[med1] + arr[med2])/2.0;
        return result;
    }

    return 1;

}


int main()
{
    vector<int> arr1 = {1,2}, arr2 = {3,4};

    cout<<findMedianSortedArrays(arr1, arr2)<<endl;
}