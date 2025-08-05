/*
Reverse a queue using stack

Problem statement:

Give a queue of integers , reverse the same queue using stack

*/

#include <iostream>
#include <vector>
#include <queue>
#include <stack>

int main()
{
    std::vector<int> a = {1, 3, 5, 7, 2};
    std::queue<int> q;
    std::stack<int> s;

    for (int i = 0; i < a.size(); i++)
    {
        q.push(a[i]);
    }

    std::cout << "Original order of the queue: ";
    while (!q.empty())
    {
        std::cout << q.front() << " ";

        s.push(q.front());
        q.pop();
    }
    std::cout << "\n";

    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }

    std::cout << "Reversed queue: ";
    while (!q.empty())
    {
        std::cout << q.front() << " ";
        q.pop();
    }
}