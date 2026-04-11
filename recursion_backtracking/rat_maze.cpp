#include<iostream>
#include<vector>
using namespace std;


class Solution {
  public:
  
  void solve(int i , int j, vector<vector<int>>&grid , string s , int n , vector<string>&ans)
    {
        if(i ==n-1 && j == n-1)
        {
            ans.push_back(s);
            return;
        }

       
        if(i+1 < grid.size() && grid[i+1][j] != 0)
        {
            grid[i][j] = 0;
            solve(i+1 , j , grid ,s+'D',n , ans);
            grid[i][j] = 1;

        }
        if(j-1 >= 0 && grid[i][j-1] != 0 )
        {
            grid[i][j] = 0;
            solve(i , j-1 , grid,s+'L',n , ans);
            grid[i][j] = 1;

        }
        if(j+1 < grid[0].size() && grid[i][j+1] != 0 ) 
        {
            grid[i][j] = 0;
            solve(i , j+1 ,grid,s+'R', n , ans);
            grid[i][j] = 1;

        }
         if(i-1 >= 0 && grid[i-1][j] != 0)
        {
            grid[i][j] = 0;
            solve(i-1 , j , grid , s+'U', n , ans);
            grid[i][j] = 1;
        }

    }
  
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        int n = maze.size();
            if(maze[0][0] == 0) return {};
            vector<string> ans;
            solve(0,0 ,maze, "",n , ans);

            return ans;
        
    }
};





int main()
{

    Solution sol;
    vector<vector<int>>r = {{1, 0, 0, 0} , {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1} };
    vector<string>ans = sol.findPath(r);


    for(auto i : ans)
    {
        cout<<i<<endl;
    }

    return 0;
}
