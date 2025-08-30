/* K largest element

Problem Statement:

Given an integers array of A of size N, you have to find and return the B 
largest element of the array A.

a = { 1, 3, 8 , 2 , 9}
--> 8 , 9 

*/

#include<iostream>
#include<vector>
#include<queue>


int main()
{
    std::vector<int>a = {1 , 44 , 5 , 7 , 99};
    int b = 3;
    // output: 99 and 44

    // min-heap: minimum element is always present at the top of the heap
    std::priority_queue<int,std::vector<int>,std::greater<int>> min_heap;


    for(auto i : a)
    {
        if(min_heap.size() < b)
        {
            min_heap.push(i);
        }
        else if (min_heap.top() < i)
        {
            min_heap.pop();
            min_heap.push(i);
        }
        
    }

    std::cout<<"The largest " << b <<" value in the given array are: ";
    while(min_heap.size() != 0)
    {
        std::cout<<min_heap.top()<<" ";
        min_heap.pop();
    }



}
