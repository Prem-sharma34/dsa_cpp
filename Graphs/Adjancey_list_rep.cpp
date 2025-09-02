/* c++ program to count number of nodes in loops
 in a linked list if loop is present

 
 
 */


#include<iostream>
#include<list>



void displayAdjList(std::list<int>adj_list[], int v)
{
    // print the adjacency list for each of the vertex from 0 to v-1

    for(int i = 0 ; i < v; i++)
    {
        //iterator
        std::cout<<i<<" -->";
        
        // iterate over all its elements in adj_list

        //iterator
        for(auto elem: adj_list[i])
        {
            std::cout<<elem<<" ";
        }
        std::cout<<std::endl;
    }
}
void add_edge(std::list<int> adj_list[] , int u , int v)
{
    // add v to the adjacency list of u

    // adj_list[u].push_back({v,w}); for weighted graph
    adj_list[u].push_back(v);


    // add u to the adjaceny list of v
    adj_list[v].push_back(u);
}

int main()
{
    // undirected and unweighted


    // there are 6 vertices in the graph : 0 to 5
    int v = 6;


    // creating an array of list of int, to store adjacency list of each vertices
    std::list<int> adj_list[v];

    // edge is between 2 vertices: u and v

    //add_edge(adj_list,0,4,30) for weighted 
    add_edge(adj_list,0 , 4);
    add_edge(adj_list,0,3);
    add_edge(adj_list,1,2);
    add_edge(adj_list,1,4);
    add_edge(adj_list,1,5);
    add_edge(adj_list,1,5);
    add_edge(adj_list,2,3);
    add_edge(adj_list,5,3);
    add_edge(adj_list,5,4);


    displayAdjList(adj_list,v);



}