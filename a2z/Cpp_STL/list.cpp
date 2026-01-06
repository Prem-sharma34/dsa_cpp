#include<iostream>
#include<list>

using namespace std;

void explainList()
{
    list<int> ls;

    ls.push_back(2);
    ls.emplace_back(4);

    ls.push_front(5);

    ls.emplace_front();

    // rest function same as vector
    // begin, end , rbegin, rend,clear, insert , size ,swap
}


int main()
{
    explainList();

}