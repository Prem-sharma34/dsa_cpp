#include<iostream>
#include<vector>
#include<climits>
using namespace std;


// this solution also contain the logic for the finding the index of the which array is being rotated.
pair<int,int> findMin(vector<int>& arr) {
            int n = arr.size();

            int  low = 0 , high = n-1;
            int ans = INT_MAX;
            int indx = -1;

            while(low <= high)
            {
                    int mid = (low + (high - low))/2;

                    if(arr[low] <= arr[high]) 
                    {
                            if(arr[low] < ans)
                            {
                                ans = arr[low];
                                indx = low;
                            }
                            break;
                    }

                    if(arr[low]<= arr[mid])
                    {
                        if(arr[low] < ans)
                        {
                            ans = arr[low];
                            indx = low;
                        }
                        low = mid +1;
                    }
                    else
                    {
                        if(arr[mid] < ans)
                        {
                            ans = arr[mid];
                            indx = mid;

                        }
                        high = mid -1;
                    }
            }

            return {ans , indx};
    }


int main()
{
    vector<int> arr = {3,4,5,1,2};

    auto [min_value , rotated_indx] = findMin(arr);

    cout<<min_value <<" and "<<rotated_indx<<endl;

}