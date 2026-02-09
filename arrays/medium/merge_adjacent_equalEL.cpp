#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;


class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums)
    {

        vector<long long>rt;

        for(long long curr : nums)
        {
            while(rt.size() != 0 && rt.back() == curr)
            {
                curr += rt.back();
                rt.pop_back();
            }
            rt.push_back(curr);
        }

        return rt;  
   
    }
};

int main()
{
  Solution sol;

  vector<int> arr = {2,1,1,2};

     vector<long long> result = sol.mergeAdjacent(arr);
     for(auto i : result){cout<<i<<" ";}
     cout<<endl;
}
