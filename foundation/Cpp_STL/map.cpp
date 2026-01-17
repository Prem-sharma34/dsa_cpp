#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;


/* 
unqiue  map
key      value
1 -
2 -


{key, value} , where key can be anything datatype , value can also anything type
*/

void explainMap() 
{
    map<int,int> mpp;

    map<int,pair<int,int>> mpp;


    map<pair<int,int>,int> mpp;

    mpp[1] = 2; // {1 ,2}
    mpp.emplace({3,1}); // {3,1}

    mpp.insert({2,4}); // { 2,4 } , it's store in unique and sorted key value

    mpp[{2,3}] = 10;


    for(auto it: mpp)
    {
        cout<<it.first << " "<<it.second << endl; //sorted key 

    }

    cout<<mpp[1];
    cout<<mpp[5];

    auto it = mpp.find(3);
    cout<<*(it).second;

    auto it = mpp.find(5);

    auto it = mpp.lower_bound(2);

    auto it = mpp.upper_bound(3);


    // erase , swap , size , empty , are same as above
 }


 void explainMultimap()
 {
    //everything same as map , only it can store multiple keys 
    // only mpp[key] cannot be used here
 }

void explainUnorderedMap()
{
    // same as set and unordered_set difference. map -. logn , un-map -> o(1)
} 