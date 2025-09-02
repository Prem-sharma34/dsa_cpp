/* 
 BFS implementation

*/

#include<iostream>
#include<queue>
#include<list>



const int n = 5;
std::list<int>adjList[n];

//aussuming there are n vertices :0 to n-1
//assuming adj list representation of the graph is given
void bfs(int s, int n)
{
    // visited[i] = true, node i has already been explored or visited
    //visited[i] = false, node i has not been xplored or visited yet
    bool visited[n];

    // queue to keep a track of the order to be explored - FIFO
    std::queue<int>q;

    q.push(s);
    visited[s] = true;

    int curr_node;
    while(!q.empty())
    {   
        //store the first element of the queue into curr_node
        curr_node = q.front();

        q.pop();

        std::cout<<curr_node <<" ";

        for(auto adjacent: adjList[curr_node])
        {
            if(visited[adjacent] == false)
            {
                // push them into queue and mark them visited
                q.push(adjacent);

                visited[adjacent] = true;

                
            } 
        }


    }

}



int main()
{

    return 0;
}