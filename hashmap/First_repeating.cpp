/* First Repeating elements

Problem Statement:
    Given an integers array  A of Size N, find the first repeating element in it.

    we need to find the element that occurs more than once and whose index of first occurrecne is smallest

    If there is no repeating element, return -1;

    a[5] = {1 , 2 , 2 , 3, 4} // return 2 -> is the first element twice
    a[5] = {1,1,2,2,3} // return 1 -> is the first element repeating twice

 */


#include<iostream>
#include<unordered_map>
#include<map>

int first_element(int a[], int n )
{
    std::unordered_map<int , int > m;

    for(int i = 0 ; i< n ; i++)
    {
        m[a[i]]++;
    }
    for(int i = 0 ; i < n ; i++)
    {
        if(m[a[i]] > 1)
        {
            return a[i];
        }
    }

    return -1;
}


int main()
{
    int a[] = {1,2,3,4,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    std::cout<<first_element(a,n);
}
