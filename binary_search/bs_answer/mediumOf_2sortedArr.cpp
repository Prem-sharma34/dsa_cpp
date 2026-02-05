#include<iostream>
#include<vector>
#include<cmath>
#include<limits.h>

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
    int n1 = nums1.size();
    int n2 = nums2.size();
        
    if(n1 > n2) return findMedianSortedArrays(nums2 , nums1);

    int low = 0 , high = n1;

    int left = (n1 + n2 +1)/2;

    int n = n1 + n2;

    while(low <= high)
    {
        int mid1 = (low + high)>>1;
        int mid2 = left-mid1;

        
    int l1 = INT_MIN , l2 = INT_MIN;
    int r1 = INT_MAX , r2 = INT_MAX;

    if(mid1 < n1) r1 = nums1[mid1];
    if(mid2 < n2) r2 = nums2[mid2];

    if(mid1 -1 >= 0) l1 = nums1[mid1-1];
    if(mid2-1>= 0) l2 = nums2[mid2-1];

    if(l1<= r2 && l2 <= r1) 
    {
        if(n%2==1) return max(l1 , l2);
        return (double)(max(l1,l2) + min(r1,r2))/2.0;
    }
    else if(l1 > r2) high = mid1 -1;
    else low = mid1+1;

    }

    return 0;

}


int main()
{
    vector<int> arr1 = {1,2}, arr2 = {3,4};

    cout<<findMedianSortedArrays(arr1, arr2)<<endl;
}