#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;
// This is a helper function which is used to calclate 

int helperfn(vector<int>&weights , int cap)
{
    int sum = 0;
    int days = 1;

    for(int i = 0 ; i < weights.size() ; i++)
    {
        if(sum + weights[i] > cap)
        {
            days++;
            sum = weights[i];
        }
        else{
            sum += weights[i];
        }
    }

    return days;
   
}

int shipwithdays(vector<int>&weights , int days)
{
    int maxiweight = *max_element(weights.begin() , weights.end());
    int total = accumulate(weights.begin() , weights.end() , 0);

    int low = maxiweight , high = total;

    while(low <= high)
    {
        int mid = (low + high)/2;

        int need = helperfn(weights,mid);

        if(need <= days) {
            high = mid -1;
        }
        else if(need > days) low = mid +1;
        else {
            high = mid -1;
        }
    }

    return low;
   
  
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;

    cout<<shipwithdays(arr , days)<<endl;
}
