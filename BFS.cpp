#include<bits/stdc++.h>
using namespace std;

class Graph{

int numberOfNodes;
list<int > *adj;

public:
    Graph(int n);
    void AddEdge(int u,int v);
    void BFS(int startNode);


};

//=--------------------------------------------
//constructor
//--------------------------------------------
Graph::Graph(int n){

numberOfNodes = n;
adj = new list<int >[n];

}

//=--------------------------------------------
//Add Edges in the graph
//=--------------------------------------------
void Graph::AddEdge(int u,int v){

adj[u].push_back(v);

}

//=--------------------------------------------
//BFS Traversal
//=--------------------------------------------

void Graph::BFS(int startNode){

bool *Visited = new bool[numberOfNodes];

for(int i=1;i<=numberOfNodes;i++)
    Visited[i] = false;

Visited[startNode] = true;
list<int > q ;
q.push_back(startNode);


while(q.empty() == false){

    int node = q.front();
    cout<<node<<" ";
    q.pop_front();


    for(auto it =adj[node].begin() ; it != adj[node].end() ; it++){

        if(Visited[*it] == false)
            Visited[*it] == true;
        q.push_back(*it);
    }

}



}

//=--------------------------------------------
//main()
//=--------------------------------------------

int main(){

Graph g(7);
g.AddEdge(1,2);
g.AddEdge(1,3);
g.AddEdge(2,4);
g.AddEdge(2,5);
g.AddEdge(3,6);
g.AddEdge(3,7);

g.BFS(1);




return 0;
}




