#include<bits/stdc++.h>
using namespace std;

class Graph
{
    list<int >* adj;
    int V; //no of vertex or nodes;

public:
     Graph(int v);
     void AddEdge(int u,int v);
     void BSF(int s);

};

Graph::Graph(int v)
{
    V = v;
    adj = new list<int >[V];
}


void Graph::AddEdge(int u, int v)
{

    adj[u].push_back(v);

}


void Graph::BSF(int s)
{

    vector<bool > vis(V,false);

    vis[s] = true;

    list<int >q;
    q.push_back(s);

    while(!q.empty()){

        int f = q.front();
        cout<<f<<" ";
        q.pop_front();

     for(auto it : adj[f])
        {

        if(!vis[it])
        {
            vis[it] = true;
            q.push_back(it);
        }
    }

    }


}


int main()
{


    Graph g(5);
    g.AddEdge(1,2);
    g.AddEdge(1,3);
    g.AddEdge(2,4);
    g.AddEdge(2,5);

    g.BSF(1);




}

