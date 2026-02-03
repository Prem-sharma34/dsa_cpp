#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool canweplace(vector<int>&arr , int distance , int cows)
{
    int cntcows = 1 , last = arr[0];

    for(int i = 1 ; i < arr.size() ; i++)
    {
        if(arr[i] - last >= distance)
        {
            cntcows++;
            last = arr[i];
        }

        if(cntcows >= cows) return true;
    }

   
    return false;

}


int aggressiveCows(vector<int> &arr, int cows) 
{
    sort(arr.begin() , arr.end());
    int n = arr.size();
    int low  = 1 , high = arr.back() - arr.front();
    int result = 0;
    while(low <= high)
    {
        int mid =low+(high - low)/2;

        if(canweplace(arr,mid , cows)== true)
        {
            result = mid;
            low = mid +1;
        }else
        {
            high = mid -1;
        }
    }

    return result;
}



int main()
{
    vector<int> arr = {0, 3, 4, 7, 10, 9};
    int k =4;
    cout<<aggressiveCows(arr , k);
}