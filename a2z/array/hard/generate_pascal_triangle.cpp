#include<iostream>
#include<vector>
using namespace std;


vector<int> generateRow(int row)
    {
        vector<int>ansRow;
        ansRow.push_back(1);
        long long ans = 1;

        for(int col = 1 ; col < row ; col++)
        {
            ans = ans * (row-col);
            ans = ans/col;
            ansRow.push_back(ans);
        }

        return ansRow;
    }


 vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;

        for(int i = 1 ; i <= numRows ; i++)
        {
            ans.push_back(generateRow(i));
        }

        return ans;
    }


int main()
{
    int n = 6;
    
    vector<vector<int>> ans = generate(n);

    for(int i = 0 ; i < ans.size() ; i++)
    {
        for(int j = 0 ; j <i ; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}