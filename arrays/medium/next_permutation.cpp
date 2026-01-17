#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


// Solution class
class Solution {
public:

    void nextPermutation(vector<int>& nums) {
        // Set index to -1
        int index = -1;

        // Find the first decreasing element from end
        for (int i = nums.size() - 2; i >= 0; i--) {
            // If a smaller element found
            if (nums[i] < nums[i + 1]) {
                // Store index
                index = i;
                break;
            }
        }

        // If no such index found
        if (index == -1) {
            
            reverse(nums.begin(), nums.end());
            return;
        }

        // Find element just greater than nums[index]
        for (int i = nums.size() - 1; i > index; i--) {
            if (nums[i] > nums[index]) {
                swap(nums[i], nums[index]);
                break;
            }
        }
        reverse(nums.begin() + index + 1, nums.end());
    }
};

// Main function
int main() {
    // Input array
    vector<int> nums = {1, 2, 3};

   
    Solution sol;

    // Call the function
    sol.nextPermutation(nums);

    // Print result
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}