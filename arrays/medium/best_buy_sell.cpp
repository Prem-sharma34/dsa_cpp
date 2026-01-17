#include<iostream>
#include<vector>



using namespace std;

int stock(vector<int>&arr)
{
    int n = arr.size();

    int min_day = arr[0];
    int min_index=0;

    for(int i = 1 ; i < n ; i++)
    {
        if(arr[i] < min_day )
        {
            min_day = arr[i];
            min_index = i;

        }
    }   

    int profit = 0;

    for(int i = min_index ; i < n; i++)
    {
        int sum = arr[i] - min_day;
        if(sum > profit)
        {
            profit = sum;
        }
    }

    return profit;

}


int main()
{
    vector<int>arr = {1,2};

    cout<<stock(arr)<<endl;
}