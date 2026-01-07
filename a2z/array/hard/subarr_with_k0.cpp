#include<iostream>
#include<vector>
#include<map>


using namespace std;


int subarr_k0(vector<int>&arr)
{
    
    int maxlen = 0;
    map<int,int>mpp;
    
    int sum = 0;
    
    for(int i = 0 ; i < arr.size() ; i++)
    {   
       sum += arr[i];
       
       if(sum == 0)
       {
        maxlen = i+1;
       }
       else if(mpp.find(sum) != mpp.end())
       {
             maxlen = max(maxlen , i - mpp[sum]);
       }
       else
       {
            mpp[sum] = i;
       }

    }

    

    return maxlen;
    
}


int main()
{

    vector<int> arr = {9, -3, 3, -1, 6, -5};

    cout<<subarr_k0(arr)<<endl;

}