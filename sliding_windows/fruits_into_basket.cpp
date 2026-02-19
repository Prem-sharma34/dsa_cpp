#include<iostream>
#include<vector>
#include<unordered_map>


using namespace std;


class Solution{
  public:
    int totalFruits(vector<int>& arr){
        int n = arr.size();
        unordered_map<int,int>mpp;

        int maxfruit = 0;

        int left = 0;
        int right = 0;

        while(right < n)
        {
            mpp[arr[right]]++;

            if(mpp.size() >2)
            {
                mpp[arr[left]]--;
                if(mpp[arr[left]] == 0)
                {
                    mpp.erase(arr[left]);
                }
                left++;
            }
            if(mpp.size() <= 2)
            {
                maxfruit = max(maxfruit , right-left+1);
            }
            
            right++;

        }

        return maxfruit;
        
      
    }
};

int main()
{
    vector<int> arr = {1, 2, 2, 2, 3};

    Solution sol;

    cout<<sol.totalFruits(arr)<<endl;
}