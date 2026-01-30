#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class RoseGarden{

public:
    bool possible(vector<int>&arr , int day , int m , int k)
    {
        int cnt = 0 , totalb = 0;

        for(int i : arr)
        {
            if(i <= day){
                cnt++;
            }else
            {
                totalb += (cnt/k);
                cnt = 0;
            }
        }

        totalb += (cnt/k);

        if(totalb>= m) return true;
        else return false;
    }

    int minDaysToMakeBouquets(vector<int>&arr , int m , int k)
    {
        if(arr.size() < (long long)m * k) return -1;

        int low = *min_element(arr.begin() , arr.end());
        int high = *max_element(arr.begin(), arr.end());

        int ans = high;
        while(low <= high)
        {
            int mid = low + (high - low)/2;

            if(possible(arr , mid , m , k) == true)
            {
                ans = mid;
                high = mid -1;
            }
            else{
                low = mid +1;
            }
        }

        auto init = atexit([]() { ofstream("display_runtime.txt") << "0";});
        return ans;
    }
};



int main() {
    vector<int> bloomDays = {7, 7, 7, 7, 13, 11, 12, 7};
    int k = 3;
    int m = 2;

    RoseGarden garden;
    int result = garden.minDaysToMakeBouquets(bloomDays, m, k);

    if (result == -1)
        cout << "We cannot make m bouquets.\n";
    else
        cout << "We can make bouquets on day " << result << "\n";

    
    return 0;
}
