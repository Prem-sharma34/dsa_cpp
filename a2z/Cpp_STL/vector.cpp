#include<iostream>
#include<vector>

using namespace std;


/* 



Iterator 

point to the memeory address 

in vector

v

*/

void explainVector()
{

    vector<int>v;

    v.push_back(1);
    v.emplace_back(2); // emplace_back is generally faster than push_back

    vector<pair<int,int>> vec;
    
    vec.push_back({1,2});
    vec.emplace_back(1,2); // in emplace_back we don't need to use curly braceses it's assume it.


    vector<int> v(5,100); // this define 5 element 100,100,100,100,100;

    vector<int> v1(5); // this define 5 element which 0 0 0 0 0 

    vector<int> v2(5,20); // same as 5,100

    vector<int>v3(v2); // this create a copy of v2 in v3




    // using an iterator

    vector<int>::iterator it = v.begin();

    it++;
    cout<<*(it)<<" ";

    it = it + 2;
    cout<<*(it)<<" ";

    vector<int>::iterator it = v.end(); // it will not at end element , it will point just after the end element
    vector<int>:: iterator it = v.rend(); //
    vector<int>:: iterator it = v.rbegin(); // this will point at the end of the array, if done ++ it will move left 

    cout<<v.back() << " "; // this mean element at the last or back

    for(vector<int>:: iterator it = v.begin(); it != v.end() ; it++)
    {
        cout<<*(it)<<" ";

    }

    for(auto it = v.begin(); it != v.end(); i++)
    {
        cout<<*(it) << " ";
    }

    for(auto it : v)
    {
        cout<<it << " ";
    }



    //              How to delete 

    v.erase(v.begin() + 1);

    v.erase(v.begin() + 2,v.begin() + 4);


    //              how to insert

    vector<int>v(2,100);
    v.insert(v.begin() , 300); // {300 , 100,100};
    v.insert(v.begin() + 1 , 2, 10); // {300 , 10 , 10 , 100 , 100}


    vector<int> copy(2,50);
    v.insert(v.begin() , copy.begin() , copy.end());


    cout<< v.size();

    v.pop_back();

    // v1 -> {10,20}
    // v2 -> {30,40}
    v1.swap(v2); // v1 -> {30,40} , v2 -> {10,20}

    v.clear();

    cout<<v.empty();
    
}

int main()
{
    explainVector();

}