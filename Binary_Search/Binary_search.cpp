/* Search element K in a sorted array -1 

Problem Statement:

given a sorted array of integers and an elements K, write a function
which returns the index on which K is present , using loops

return -1 if the elment is not present
a = [1,2,3,4,5,6]
k = 4
--->3 This is the answer we should get after the implementation
*/

#include<iostream>
#include<vector>

namespace h{
    void print()
    {
        std::cout<<"hello";
    }
}
int BinarySearch(std::vector<int>& a, int n, int k)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {   
        int mid = s + (e - s) / 2;

        if (a[mid] == k)
        {
            return mid;
        }
        else if (a[mid] > k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    std::vector<int> a = {1, 2, 3, 4, 5, 6, 7};
    int n = a.size();
    int k = 6;

    std::cout << BinarySearch(a, n, k) << std::endl;
    h::print();

    return 0;
}
