#include<iostream>
#include<vector>

using namespace std;


int sol(vector<int>&arr)
{
    int n = arr.size();

    for(int i = 0 ; i < arr.size() ; i++)
    {
        if(i == 0)
        {
            if(arr[i] != arr[i+1]) return arr[i];
        }
        else if(i == n-1)
        {
            if(arr[i] != arr[i-1]) return arr[i];
        }
        else
        {
            if(arr[i] != arr[i+1] && arr[i]!= arr[i-1])
            {
                return arr[i];
            }
        }
    }

    return -1;
    
}

int main()
{
    vector<int>arr = {1,1,2,3,3,4,4,8,8};

    cout<<sol(arr);
}