#include<iostream>
#include<map>
#include<unordered_map>
#include<limits>

using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[n];

    map<int,int>mpp;
    for(int i = 0 ; i < n; i++)
    {
        cin>>arr[i];
        mpp[arr[i]]++;
    }

    //pre-compute
    for(auto it: mpp)
    {
        cout<<it.first <<"->"<<it.second<<endl;
    }

    int highest = -1;
    int lowest = __INT_MAX__;
    // find out the highest and lowest frequecy
    for(auto i : mpp)
    {
        if(i.second > highest)
        {
            highest = i.second;
        }
        if(i.second < lowest)
        {
            lowest = i.second;
        }
    }

    cout<<"Highest: " <<highest<<" lowest: "<<lowest<<endl;


    

    int q;
    cin>>q;
    while(q--)
    {
        int number;
        cin>>number;

        cout<<mpp[number]<<endl;
    }

    return 0;
}