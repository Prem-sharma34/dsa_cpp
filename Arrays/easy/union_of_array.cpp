#include<iostream>
#include<vector>

using namespace std;

vector<int> un(vector<int>&arr1 , vector<int>&arr2)
{
    vector<int>unionarr;
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i = 0 ;
    int j = 0 ;

    while(i < n1 && j < n2)
    {
        if(arr1[i] <= arr2[j])
        {
            if(unionarr.empty() || unionarr.back() != arr1[i])
            {
                unionarr.push_back(arr1[i]);
               
            }
             i++;
        }else
        {
        if(unionarr.empty()|| unionarr.back() != arr2[j])
            {
                unionarr.push_back(arr2[j]);
            } 
            j++;

        }
    }

    while(i < n1)
    {
        if(unionarr.empty() || unionarr.back() != arr1[i])
            {
                unionarr.push_back(arr1[i]);
            }
            i++;

    }

    while(j < n2)
    {

          if(unionarr.empty() || unionarr.back() != arr2[j])
            {
                unionarr.push_back(arr2[j]);
            } 
            j++;

        
    }

    return unionarr;
    
}


int main()
{
    vector<int>a={1,1 , 2 ,3 , 4};
    vector<int>b={2 , 3 ,3 ,4 ,5 ,6 , 7};

    vector<int> arr = un(a,b);

    for(auto i : arr)
    {
        cout<<i<<" ";
    }
}