#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<unordered_set>
using namespace std;


int better_longestsq(vector<int>&arr) // It will have any T.C O(n + nlogn(for sorting))
{
        int n = arr.size();
        if(n==0) return 0;
        sort(arr.begin() , arr.end());
        int longest = 1;
        int cntcurr = 0;
        int lastsmaller= INT_MIN;
        for(int i = 0 ; i < n ; i++)
        {
            if(arr[i]-1 == lastsmaller)
            {
                cntcurr ++;
                lastsmaller = arr[i];
            }
            else if(arr[i] == lastsmaller){}
            else if(arr[i] != lastsmaller)
            {
                cntcurr = 1;
                lastsmaller = arr[i];
            }

            longest = max(cntcurr,longest);
        }

        return longest;
}

int Op_longest_seq(vector<int>&arr) // The time complexity fo the this approach will be O(2n)
{

    int longest = 0;
    unordered_set<int>st;

    for(int i = 0 ; i < arr.size() ; i++)
    {
        st.insert(arr[i]);
    }

    for(auto it : st)
    {
        if(st.find(it-1) == st.end()) // the Set data structure return any iterator , it will return element , or last if not found.
        {
            int cnt = 1;
            int x = it;

            while(st.find(x+1) != st.end())
            {
                x = x+1;
                cnt++;
            }

            longest = max(cnt , longest);
            

        }
    }

    return longest;
}


int main()
{
    vector<int>arr = {1,2,3,2};
    int ans = Op_longest_seq(arr);
    cout<<ans<<endl;
}