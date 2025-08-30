/* Magician and chocolates

Problem statement:

Given N bas, each bag contain Bi chocoaltes. There is a kid and a magician.

In out unit of time, kid choose a random bag i , eats Bi chocolates,
then the magician fills the ith bag with floor(Bi/2) choclates

Find the maximum number of choclates that kid can eat in A unit of time.


Exampple:

b = {4, 2, 9 , 19 }

a = 2

kid need to eat maximum no of chocloates
// 19 --> floor(19/2)

now:
b = {4,2, 9 , 9}

// 9 

output: 19 + 9;


*/


#include<bits/stdc++.h>


int main()
{
    std::vector<int> b = {1,5, 7 , 80};
    int a = 2;

    std::priority_queue<int> max_heap;

    for(auto i : b)
    {
        max_heap.push(i);
    }
    int sum = 0;
    int current = 0;
    while(a != 0)
    {
        current = max_heap.top();
        sum += current;
        max_heap.pop();

        max_heap.push(current/2);
        
        a--;
        

    }

    std::cout<<"The maximum number of the chocolate that kid can eat is: "<<sum;
}