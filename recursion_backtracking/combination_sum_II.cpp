#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;



class Solution {
public:
    void findcomb(vector<int>&arr , vector<vector<int>>&ans , int target , vector<int>&ds , int index)
    {
        if(target == 0)
        {
            ans.push_back(ds);
            return;
        }

        for(int i =index; i <  arr.size() ; i++ )
        {
            if(i > index && arr[i] == arr[i-1])continue;
            if(arr[i] > target) break;

            ds.push_back(arr[i]);
            findcomb(arr , ans , target-arr[i],ds,index+1);
            ds.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
            sort(arr.begin() , arr.end());
            vector<vector<int>>ans;
            vector<int>ds;

            findcomb(arr , ans , target, ds , 0);
            return ans;
    }
};


int main()
{
    Solution sol;

    vector<int>arr = {2,5,2,1,2};

    vector<vector<int>>ans = sol.combinationSum2(arr,5);

    for(auto a: ans)
    {
        for(auto b : a)
        {
            cout<<b<<" ";
        }
        cout<<endl;
    }
}




