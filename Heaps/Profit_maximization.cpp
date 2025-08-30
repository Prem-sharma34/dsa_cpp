/* Profit maximization

Problem Statement: 

Given an array A , representing no. of vacant seats in each row of a 
stadium. You need to seel tickets to B people


Each seat costs equal to the number of vacant seats in the row it
belongs to. The task if to mazimize the profit by selling the tickets to B
people.


example: 

a = {1 , 5, 9 , 11, 4}

b = 2
max profit = 9 + 11 = 20;





*/

#include<iostream>
#include<vector>
#include<queue>


int main()
{
    std::vector<int>a = { 1 , 3, 7 , 9 ,2};

    std::priority_queue<int> max_heal;

    for(auto i : a)
    {
        max_heal.push(i);

    }

    int b = 3;
    int sum = 0;
    while(b != 0)
    {
        sum += max_heal.top();
        max_heal.pop();
        b--;
    }


    std::cout<<sum;
}