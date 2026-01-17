#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;


// T.c will be O(2n)

int find_major(vector<int>& arr)
{
    unordered_map<int , int>mpp;
    int n = arr.size();
    for(int i = 0 ; i < n ; i++) // tc O(n)
    {   
        mpp[arr[i]]++;

    }

    for(auto it: mpp) // O(n)
    {
        if(it.second > n/2)
        {
            return it.first;
        }
    }


    return -1;
}

/* using  */


int main()
{
    vector<int>arr={3,2,3};

    cout<<find_major(arr)<<endl;

    
}