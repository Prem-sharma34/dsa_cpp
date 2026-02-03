#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

int numsStudent(vector<int>&arr , int pages)
{
    int student =0 , pagesSum = 0;

    for(int i = 0 ; i < arr.size() ; i++)
    {
        if(arr[i] + pagesSum <= pages)
        {
            pagesSum+= arr[i];
        }else
        {
            student++;
            pagesSum=arr[i];
        }
    }

    return student;
}


int book_allocation(vector<int>&arr , int m)
{
    int n = arr.size();
    if(n < m) return -1;

    int low = *max_element(arr.begin() , arr.end());
    int high = accumulate(arr.begin() , arr.end(), 0);

    while(low <= high)
    {
        int mid = low+(high-low)/2;

        int students = numsStudent(arr,mid);

        if(students == m) low = mid +1;
        else high = mid -1;
    }

    return low;

}





int main()
{
     vector<int>arr = {25,46 ,28 , 49 , 24};
     int m = 4;

    int result  = book_allocation(arr , m);

     cout<<result<<endl;


    return 0;
}