#include<iostream>
#include<algorithm>

using namespace std;

void explainPair()
{
    pair<int,int> p = {1,3};

    cout<< p.first << " " << p.second;

    // how to three number

    pair<int,pair<int,int>> q= {1,{3,5}};

    cout<<q.first<<" "<<q.second.second<<" "<<q.second.first;

    // pairs of the array

    pair<int,int> arr[] = {{1,2},{2,5}, {5,1}};

    cout<<arr[1].second;
}




int main()
{
    explainPair();

    return 0;
}