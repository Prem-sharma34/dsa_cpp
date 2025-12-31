#include<iostream>
#include<vector>

using namespace std;



vector<int> minCosts(vector<int>& cost) {
        // what we need to do , start with person cost.
        // then check , if where i standing at position , it's cost or position , is greater or smaller than next person.
        // if i greater than swap for free ,if smaller then take the cost 

        if(cost.size() <= 1) return cost;
        vector<int>ans;
        ans.push_back(cost[0]);

        int previous_element = cost[0];
        int previous_cost = cost[0];

        for(int i = 1 ; i < cost.size() ; i++)
        {

            if(cost[i] <= previous_cost)
            {
                ans.push_back(cost[i]);
                previous_cost = cost[i];
            }else if(cost[i] > previous_cost)
            {
                ans.push_back(previous_cost);
            }

            previous_element = cost[i];
            

        }

        return ans;
}

int main()
{
    vector<int>cost = {1,2,4,6,7};

    vector<int>ans=minCosts(cost);

    for(auto it: ans)
    {
        cout<<it<<" ";
    }
}