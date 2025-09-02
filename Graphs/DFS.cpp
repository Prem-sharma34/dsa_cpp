/* DFS trasveral

*/

#include<iostream>
#include<list>
#include<queue>

std::list<int>adjList[n];

// Assuming that graph is given to us in the form of adjList

const int n = 5;
bool visited[n];

void dfs(int curr_node)
{
    visited[curr_node] = true;

    std::cout<<curr_node<<" ";


    for(auto adjacent: adjList[curr_node])
    {
        if(visited[adjacent] == false)
        {
            dfs(adjacent);
        }
    }
}





int main()
{
    return 0;
}