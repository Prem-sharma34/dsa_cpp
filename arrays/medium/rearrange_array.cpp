#include<iostream>
#include<vector>
using namespace std;

vector<int> rearrangeArray(vector<int>& arr)
{
    int n = arr.size();
    vector<int>pos;
    vector<int>neg;

    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] > 0)
        {
            pos.push_back(arr[i]);
        }
        else
        {
            neg.push_back(arr[i]);
        }
    }


    if(pos.size() > neg.size())
    {
        for(int i = 0 ; i < neg.size() ; i++)
        {
        
                arr[i*2] = pos[i];
           
                arr[i*2+1] = neg[i];
        }

        int index = neg.size()*2;

        for(int i = neg.size() ; i  < pos.size(); i++)
        {
            arr[index] = pos[i];
            index++;
        }
    }else
    {

        for(int i = 0 ; i < pos.size() ; i++)
        {
            if(arr[i] > 0)
            {
                arr[i*2] = pos[i];
            }
            else{
                arr[i*2+1] = neg[i];
            }
        }

        int index = pos.size()*2;

        for(int i = pos.size() ; i  < neg.size(); i++)
        {
            arr[index] = neg[i];
            index++;
        }
    }


    return arr;

    
}


int main()
{
    vector<int> arr ={-1,2,-3,-4,9,3};

    vector<int>ans = rearrangeArray(arr);

    for(auto i :ans)
    {
        cout<<i<<" ";
    }

    return 0;
}