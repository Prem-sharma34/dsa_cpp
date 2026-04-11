#include<iostream>
#include<vector>

using namespace std;

// for print a element at certain row and col
void print_elemeent(int n , int r)
{
    int res = 1;

    for(int i = 0 ; i < r ; i++)
    {
        res *= (n-i);
        res = res/(i+1);
    }
    cout<<res<<endl;
}


// for gettting the entire row 
vector<int> print_row(int n)
{
    vector<int>result;

    int ans = 1;
    result.push_back(ans);

    for(int i = 1 ; i < n ; i++)
    {
        ans = ans * (n-i);
        ans = ans / i;
        result.push_back(ans);
    }


    return result;

}

// for generating the entire pascal traingle of certain row+
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>r;

        for(int i = 1 ; i <= numRows ; i++) // past time we were making mistake regarding starting index and till where we have to run
        {
            vector<int>ans;
            int temp= 1;
            ans.push_back(temp);

            for(int j = 1 ; j <  i ; j++)
            {
                temp = temp * (i-j);
                temp = temp / j;
                ans.push_back(temp);
                
            }
            r.push_back(ans);
        }
         return r;

    }

};


int main()
{
    // print_elemeent(5,3);
    // vector<int>ans = print_row(5);

    // for(auto i : ans)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    Solution sol;

    vector<vector<int>>r = sol.generate(5);

    for(auto i : r)
    {
        for(auto j : i)
        {
            cout<<j<<" ";
        }

        cout<<endl;

    }

}