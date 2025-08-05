/* Print the element of the queue 
Given an array of integers, create a queue from it having the same elements
Print all the elements of this queue in FIFO order, separated by space
*/

#include<iostream>
#include<queue>
#include<string>


int main()
{
   int a[] = {1,2,3,4,7,2};

    int n = sizeof(a)/sizeof(a[0]);


    std::queue<int>q;

    for(int i = 0 ; i < n; i++)
    {
        q.push(a[i]);
    }

    std::cout<<"Print the element of the queue: ";

    while(!q.empty())
    {
        std::cout<<q.front()<<" ";
        q.pop();
    }
    
}