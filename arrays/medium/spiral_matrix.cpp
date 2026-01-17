#include<iostream>
#include<vector>

using namespace std;



vector<int> sprialM(vector<vector<int>>&mat)
{
    int n = mat.size();
    int m = mat[0].size();

    int left = 0 , right = m -1;
    int top = 0 , bottom = n -1;

    vector<int>ans;


    while(left <= right && top <= bottom)
    {
        for(int i = left ; i <= right ; i++)
        {
            ans.push_back(mat[top][i]);

        }
        top++;

        for(int i = top ; i <= bottom ; i++)
        {
            ans.push_back(mat[i][right]);
        }
        right--;


        // These are two edge cases we need to check

        if(top <= bottom)
        {
              for(int i = right ; i >= left; i--)
            {
                ans.push_back(mat[bottom][i]);
            }
        bottom--;
        }

          

        // These are two edge cases 
        if(left <= right)
        {
            for(int i = bottom ; i >= top ; i--)
        {
            ans.push_back(mat[i][left]);
        }

        left++;
        }
        

    }

    return ans;

}


int main()
{
    int n , m;

    cout<<"Enter number of the row and colum:"<<endl;
    cin>>n>>m;

    vector<vector<int>>mat(n , vector<int>(m));
    cout<<"Enter the values for each row:"<<endl;
     for(int i = 0 ; i < n ; i++)
    {
            for(int j = 0 ; j< m ; j++)
            {
                cin>>mat[i][j];
            }
        }
    

    vector<int>ans=sprialM(mat);
    
    for(auto i : ans)
    {
        cout<<i<<" -> ";

    }

    return 0;
    


}

