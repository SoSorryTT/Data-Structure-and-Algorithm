#include <iostream>
#include <vector>

using namespace std;

typedef int valueType;

class Graph {
    valueType node;
    vector<int>* adj;
    void DFS(int v, bool visited[]);

    public:
        Graph(valueType node);
        void addEd(int u, int v);
        int countComponent();
};

Graph::Graph(valueType node) {
    this->node = node;
    adj = new vector<int>[node];
}

void Graph::addEd(int u, int v) {
    u--; v--;
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void Graph::DFS(int v, bool visited[]) {
    visited[v] = true;
    for(auto i = adj[v].begin(); i != adj[v].end(); ++i) {
        if(!visited[*i]) {
            DFS(*i, visited);
        }
    }
}

int Graph::countComponent() {
    bool* visited = new bool[node];
 
    int count = 0;
    for (int i = 0; i < node; i++) {
        visited[i] = false;
    }
    for (int j = 0; j < node; j++) {
        if (!visited[j]) {
            DFS(j, visited);
            count ++;
        }
    }
    return count;
}

main() {
    int n, m, u, v;
    cin >> n >> m;
    
    Graph g(n);
    for(int i=0; i<m; i++) {
        cin >> u >> v;
        g.addEd(u, v);
    }
    cout << g.countComponent() << endl;
}