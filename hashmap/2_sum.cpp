/* 2 sum

Problem statement:

given an array of integers, find two numbers such that they add up to a
specific target number.

a = {  1, 2, 5 , 7 , 9}
k = 3 , --> 1 and 2 
*/


#include<iostream>
#include<unordered_map>
#include<vector>



int main()
{
    std::vector<int>a = {1,2,3,4,5};
    int sum  = 9;

    int x = -1;
    int y = -1;

    std::unordered_map<int , int> m;
    for(int i = 0 ; i < a.size(); i++)
    {
        x = a[i];
        y = sum - x;

        // element y is present and if it's present then, it will return last 
        if(m.find(y) != m.end())
        {
            std::cout<< i <<" "<<m[y]; // we are just print the current index and the index of the other pair 
            break;
        }

        if(m.find(x) == m.end())
        {
            m[x] = i;
        }
    }

    return 0;
}