#include<iostream>
#include<vector>
using namespace std;


class Solution {
  public:
  
  void solve(int i , int j , vector<vector<int>>&vis , vector<vector<int>>&maze , int n ,string move, vector<string>&ans)
  {
      if(i == n-1&& j == n-1)
      {
          ans.push_back(move);
          return;
      }
      
      if(i+1 <n && vis[i+1][j] != 1 && maze[i+1][j]==1)
      {
          vis[i+1][j] = 1;
          solve(i+1,j ,vis , maze , n , move+"D",ans);
          vis[i+1][j] = 0;
      }
      if(j-1>=0 && vis[i][j-1] != 1 && maze[i][j-1] == 1)
      {
          vis[i][j-1] = 1;
          solve(i,j-1 , vis , maze , n , move+"L" , ans);
          vis[i][j-1] = 0;
      }
      if(j+1 < n && vis[i][j+1] != 1 && maze[i][j+1] == 1)
      {
          vis[i][j+1] = 1;
          solve(i,j+1 , vis , maze , n , move+"R" , ans);
          vis[i][j+1] = 0;
      }
      if(i-1 >=0 && vis[i-1][j] != 1 && maze[i-1][j]==1)
      {
          vis[i-1][j] = 1;
          solve(i-1,j ,vis , maze , n , move+"U",ans);
          vis[i-1][j] = 0;
      }
  }
  
    vector<string> ratInMaze(vector<vector<int>>& maze) {
       int n = maze.size();
       if(maze[0][0] ==0) return {};
       vector<string>ans;
       vector<vector<int>> vis(n,vector<int>(n,0));
       vis[0][0] = 1;
       solve(0,0,vis,maze,n ,"", ans);
       
       return ans;
        
    }
};

