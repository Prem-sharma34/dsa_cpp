#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find repeating and missing numbers
    vector<int> findMissingRepeatingNumbers(vector<int> &nums)
    {

        // size of the array
        int n = nums.size();

        int xr = 0;

        for (int i = 0; i < n; i++)
        {
            // XOR of all elements in nums
            xr = xr ^ nums[i];

            // XOR of numbers from 1 to n
            xr = xr ^ (i + 1);
        }

        // Get the rightmost set bit in xr
        /*

        int differencebit = 0;
        while (1)
        {
            if ((xr & (1 << differencebit)) != 0)
            {
                break;
            }
            differencebit++
        }

        */

        // or
        int number = (xr & ~(xr - 1));

        // Group the numbers based on the differentiating bit
        //  Number that falls into the 0 group
        int zero = 0;

        // Number that falls into the 1 group
        int one = 0;

        for (int i = 0; i < n; i++)
        {
            /* Check if nums[i] belongs to the 1 group
            based on the differentiating bit*/
            if  ((nums[i] & number) != 0)
            {

                // XOR operation to find numbers in the 1 group
                one = one ^ nums[i];
            }
            else
            {
                // XOR operation to find numbers in the 0 group
                zero = zero ^ nums[i];
            }
        }

        // Group numbers from 1 to n based on differentiating bit
        for (int i = 1; i <= n; i++)
        {
            /* Check if i belongs to the 1 group
            based on the differentiating bit*/
            if ((i & number) != 0)
            {

                // XOR operation to find numbers in the 1 group
                one = one ^ i;
            }
            else
            {
                // XOR operation to find numbers in the 0 group
                zero = zero ^ i;
            }
        }

        // Count occurrences of zero in nums
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] == zero)
            {
                cnt++;
            }
        }

        if (cnt == 2)
        {
            /*zero is the repeating number,
            one is the missing number*/
            return {zero, one};
        }

        /* one is the repeating number,
        zero is the missing number*/
        return {one, zero};
    }
};

int main()
{
    vector<int> nums = {3, 1, 2, 5, 4, 6, 7, 5};

    // Create an instance of Solution class
    Solution sol;

    vector<int> result = sol.findMissingRepeatingNumbers(nums);

    // Print the repeating and missing numbers found
    cout << "The repeating and missing numbers are: {" << result[0] << ", " << result[1] << "}\n";

    return 0;
}
