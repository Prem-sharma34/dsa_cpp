#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;


class Solution{
public:
    int findMedian(vector<vector<int>>&matrix) {
       vector<int>temp;
        int n = matrix.size();
        int m = matrix[0].size();
                for(int i = 0 ; i < n ; i++ )
                {
                    for(int j = 0 ; j < m ; j++)
                    {
                       temp.push_back(matrix[i][j]);
                    }
                }
          sort(temp.begin() , temp.end());
        int total = n *m;
        int medium = total/2;

        

        return temp[medium];
    }
};


int main()
{
  vector<vector<int>> matrix = {{1, 3, 8},{2, 3, 4},{1, 2, 5}};

  Solution solution;

  int result = solution.findMedian(matrix);

    cout<<result<<endl; 
}
