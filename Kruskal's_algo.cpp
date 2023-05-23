#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define edge pair<int, int>

class Graph {
   private:
  vector<pair<int, edge> > G;
  vector<pair<int, edge> > T;
  int *parent;
  int V;
   public:
  Graph(int V);
  void AddWeightedEdge(int u, int v, int w);
  int find_set(int i);
  void union_set(int u, int v);
  void kruskal();
  void print();
};
Graph::Graph(int V) {
  parent = new int[V];
  for (int i = 0; i < V; i++)
    parent[i] = i;

  G.clear();
  T.clear();
}
void Graph::AddWeightedEdge(int u, int v, int w) {
  G.push_back(make_pair(w, edge(u, v)));
}
int Graph::find_set(int i) {
  if (i == parent[i])
    return i;
  else
    return find_set(parent[i]);
}

void Graph::union_set(int u, int v) {
  parent[u] = parent[v];
}
void Graph::kruskal() {
  int i, uRep, vRep;
  sort(G.begin(), G.end());
  for (i = 0; i < G.size(); i++) {
    uRep = find_set(G[i].second.first);
    vRep = find_set(G[i].second.second);
    if (uRep != vRep) {
      T.push_back(G[i]);
      union_set(uRep, vRep);
    }
  }
}
void Graph::print() {
  cout << "Edge :"
     << " Weight" << endl;
  for (int i = 0; i < T.size(); i++) {
    cout << T[i].second.first << " - " << T[i].second.second << " : "
       << T[i].first;
    cout << endl;
  }
}
int main() {
  Graph g(7);
  g.AddWeightedEdge(1, 2, 9);
  g.AddWeightedEdge(1, 3, 9);
  g.AddWeightedEdge(1, 5, 19);
  g.AddWeightedEdge(1, 7, 10);
  g.AddWeightedEdge(2, 1, 9);
  g.AddWeightedEdge(2, 3, 8);
  g.AddWeightedEdge(2, 4, 15);
  g.AddWeightedEdge(2, 6, 12);
  g.AddWeightedEdge(3, 1, 9);
  g.AddWeightedEdge(3, 2, 8);
  g.AddWeightedEdge(3, 5, 24);
  g.AddWeightedEdge(4, 2, 15);
  g.AddWeightedEdge(4, 6, 14);
  g.AddWeightedEdge(4, 7, 11);
  g.AddWeightedEdge(5, 1, 19);
  g.AddWeightedEdge(5, 3, 24);
  g.AddWeightedEdge(6, 2, 12);
  g.AddWeightedEdge(6, 4, 14);
  g.AddWeightedEdge(6, 7, 3);
  g.AddWeightedEdge(7, 1, 10);
  g.AddWeightedEdge(7, 4, 11);
  g.AddWeightedEdge(7, 6, 3);
  g.kruskal();
  g.print();
  return 0;
}

