#include <iostream>
#include <vector>

using namespace std;

/* bool fun(vector<int> &arr, int n, vector<int> &ans, int sum, int curr_sum, int i)
{
    if (i == n)
    {
        if (curr_sum == sum)
        {
            for (auto i : ans)
            {
                cout << i << " ";
            }
            cout << endl;
            return true;
        }
        return false;
    }

    ans.push_back(arr[i]);
    curr_sum += arr[i];

    if (fun(arr, n, ans, sum, curr_sum, i + 1))
        return true;

    curr_sum -= arr[i];
    ans.pop_back();

    if (fun(arr, n, ans, sum, curr_sum, i + 1))
        return true;

    return false;
} */

int fun(vector<int> &arr, int n, int sum, int curr_sum, int i)
{
    if (i == n)
    {
        if (curr_sum == sum)
            return 1;

        return 0;
    }

    curr_sum += arr[i];

    int l = fun(arr, n, sum, curr_sum, i + 1);

    curr_sum -= arr[i];

    int r = fun(arr, n, sum, curr_sum, i + 1);

    return l + r;
}

int main()
{
    vector<int> arr = {1, 2, 1};
    int n = arr.size();
    vector<int> ans;
    int sum = 2;

    cout << fun(arr, n, sum, 0, 0) << endl;
}