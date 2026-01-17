#include<iostream>
#include<queue>

using namespace std;

void explainPQ()
{
    // max heap
    priority_queue<int> pq;

    pq.push(5);
    pq.push(2);
    pq.push(8); // {8,5,2}
    pq.emplace(10); // {10 , 8 , 5, 2}

    cout<<pq.top();

    pq.pop();

    cout<<pq.top(); // print 8

    // size swap empty function same as others


    // min heap
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(5);
    pq.push(2); // {2,5}
    pq.push(8); // {2 , 5 , 8}

    pq.emplace(10); // {2,5,8,10}

    cout<<pq.top();


    // 

    /* 
    push - logn
    top - o(1)
    pop - log n
    
    */




}