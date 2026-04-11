#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;

class Solution {
public:
    static bool sortbyVal(const pair<char , int>&a,const pair<char,int>&b)
    {
        return (a.second > b.second);
    }

    string frequencySort(string s) {
        unordered_map<char , int>mpp;

        for(int i : s)
        {
            mpp[i]++;
        }

        vector<pair<char,int>>vec;

        unordered_map<char,int>::iterator it;

        for(it = mpp.begin(); it != mpp.end() ; it++)
        {
            vec.push_back(make_pair(it->first , it->second));
        }

        sort(vec.begin() , vec.end() , sortbyVal);


        string result ="";

        for(auto i : vec)
        {
            for(int j = 0 ; j < i.second ; j++)
            {
                result += i.first;

            }
        }


        return result;


    }
};



int main() 
{
    Solution sol;

    cout<<sol.frequencySort("tree")<<endl;
}