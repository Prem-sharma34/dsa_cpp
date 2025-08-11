/* Find if a pair with given different exists

Problem statemnet:

Given an array A of integers and another non negative integer k, find if
there exists 2 indices i and j such that A[i] - A[j] = k 
where i != j 

a = { 1 , 2, 4, 5}
different = 2

4-2 = 2 answer

if difference = 3 
4 -1 = 3
5-2 = 0

*/
#include<iostream>
#include<unordered_map>



int main()
{
    int a[] = { 1, 2, 4, 5};
    int n = sizeof(a)/sizeof(a[0]);
    int diff = 3;

    //output: 1

    int x = -1;
    int y = -1;

    int flag = 0;
    std::unordered_map<int , int> m; 
    for(int i = 0 ; i < n ; i++)
    {
        x = a[i];
        y = x - diff;


        // the key is present in the map
        if(m.find(y) != m.end())
        {
            flag = 1;
            std::cout<<1<<std::endl;
            break;
        }

        if(m.find(x) == m.end())
        {
            m[x]++;
        }

    }

    if(flag == 0)
    {
        std::cout<<0<<std::endl;
    }

}