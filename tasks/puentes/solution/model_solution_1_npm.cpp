#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
vector<int> tin, low;
int timer;
int bridges = 0;

void dfs(int u, int parent = -1) {
    visited[u] = true;
    tin[u] = low[u] = timer++;
    for (int v : adj[u]) {
        if (v == parent) continue;
        if (visited[v]) {
            low[u] = min(low[u], tin[v]);
        } else {
            dfs(v, u);
            low[u] = min(low[u], low[v]);
            if (low[v] > tin[u]) {
                // u - v es un puente
                bridges++;
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    adj.resize(n + 1);
    visited.assign(n + 1, false);
    tin.assign(n + 1, -1);
    low.assign(n + 1, -1);

    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    timer = 0;

    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {
            dfs(i);
        }
    }

    cout << bridges << endl;
    return 0;
}
