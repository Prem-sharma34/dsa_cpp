#include<vector>
#include<unordered_map>
#include<map>

using namespace std;


int subarraySum(vector<int>& arr, int k) {
    unordered_map<int,int>mpp;
    int n = arr.size();
    mpp[0] = 1;
    int presum = 0; 
    int cnt = 0;

    for(int i = 0 ; i < n ; i++)
    {
        presum += arr[i];
        int remove = presum - k;
        cnt+= mpp[remove];

        mpp[presum] += 1;
    }

    return cnt;
}