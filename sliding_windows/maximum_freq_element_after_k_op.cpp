#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;



class Solution {
public:

    int binaryS(int targetIndex , vector<int>&nums , vector<long>&prefixSum , int k)
    {
        

        int l = 0 , r = targetIndex;

        int target = nums[targetIndex];
        int bestIndx = targetIndex;

        while(l <= r)
        {
                int mid = l + (r-l)/2;

                long count = (targetIndex - mid +1);
                long windowSum = count*target;

                long currSum = prefixSum[targetIndex]-prefixSum[mid]+nums[mid];

                int operation = windowSum - currSum;

                if(operation > k)
                {
                    l = mid +1;
                }else
                {
                    bestIndx = mid;
                    r = mid-1;
                }
        }

        return  (targetIndex-bestIndx+1);
    }


    int maxFrequency(vector<int>& nums, int k) {
            int n = nums.size();

            sort(nums.begin() , nums.end());

            vector<long>prefixSum(n);

            prefixSum[0] = nums[0];

            for(int i = 1 ; i < n ; i++)
            {
                prefixSum[i] = prefixSum[i-1]+nums[i];
            }

            int maxlen = 0;

            for(int i = 0 ; i < n ; i++)
            {
                int targetIndex = i;

                int freq = binaryS(targetIndex , nums,prefixSum , k);

                maxlen = max(maxlen , freq);
            }

            return maxlen;

    }
};


int main()
{

Solution sol;

  vector<int>arr = {1,4,8,13};

  int k = 5;

    cout<<sol.maxFrequency(arr , k)<<endl;

}











