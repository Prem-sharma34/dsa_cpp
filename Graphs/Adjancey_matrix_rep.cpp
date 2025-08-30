/* c++ progrma to count number of nodes in  loop in a linked list if loop is present */

#include<iostream>
#include<vector>


//initially all the cells are 0 - stating that there are no edges
// declaration of the adj Matrix.
int adjMatrix[6][6];

void displayAdjMatrix(int v)
{
    for(int i = 0 ; i < v ; i++)
    {
        for(int j = 0 ; j < v ; j++ )
        {
            // 1 - edge between i and j
            // 0 - no edge between i and j

            std::cout<<adjMatrix[i][j];
        }
    }
}

void add_edge(int u , int v )
{
    // undirected graph - edge between u and v: edge is from u to v and v to u both.

    adjMatrix[u][v] = 1;

    //undirected but , not required for directed grab

    adjMatrix[v][u] = 1;


    /* 
    // Reference for the weight-undirected graph 
    adMatrix[v][u] = w
    
    adjMatrix[u][v] = 1;
    
    */
}


int main()
{
    //adj matrix representation of a graph --> undirected, unweighted


    //v is the number of vertices in the graph
    int v = 6; // 0 to v-1 : 0 to 5


    // initializing the adjMatrix to all 0s
    for(int i = 0 ; i<v ; i++)
    {
        for(int j = 0 ; j< v; j++)
        {
            adjMatrix[i][j] = 0;
        }
    }

    //create edges in graph
/* 
    for(int i = 0 ; i < e ; i++)
    {
        int u; 
        int v;

        add_edge(u,v);
    } 
*/
    add_edge(0,4);
    add_edge(0,3);
    add_edge(1,2);
    add_edge(1,4);
    add_edge(1,5);
    add_edge(2,3);
    add_edge(5,3);
    add_edge(5,4);


/*     add_edge(8,4,40);
    add_edge(0,3,80);
    add_edge(1,2,79);
    add_edge(1,4,90);
    add_edge(1,5,39);
    add_edge(2,3,90);
    add_edge(5,3,20);
    add_edge(5,4,10); */

    displayAdjMatrix(v);
    return 0;
}