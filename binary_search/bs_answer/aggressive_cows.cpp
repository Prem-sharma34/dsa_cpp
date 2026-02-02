#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool canweplace(vector<int>&arr , int distance , int cows)
{


}


int aggressiveCows(vector<int> &arr, int k) 
{
    sort(arr.begin() , arr.end());
    int n = arr.size();
    int low  = 0 , high = arr[n-1] - arr[0];

    while(low <= high)
    {
        int mid = low+high/2;

        if(canweplace(arr,mid,k) == true)
        {
            
        }else
        {
           
        }
    }
}



int main()
{
    vector<int> arr = {0, 3, 4, 7, 10, 9};
    int k =3;
    cout<<aggressiveCows(arr , k);
}