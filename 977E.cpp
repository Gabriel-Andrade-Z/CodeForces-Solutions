#include <bits/stdc++.h>
using namespace std;

vector<int> adj[200001];
bool visited[200001];

void dfs(int v, vector<int>& component) {
        stack<int> s; s.push(v);
        visited[v] = true;
        while (!s.empty()) {
                int node = s.top(); s.pop();
                component.push_back(node);
                for (int neighbor : adj[node]) {
                        if (!visited[neighbor]) {
                                visited[neighbor] = true;
                                s.push(neighbor);
                        }
                }
        }
}

bool isCycle(const vector<int>& component) {
        int n = component.size(), edgeCount = 0;
        for (int v : component) {
                int degree = adj[v].size();
                if (degree != 2) {
                        return false;
                }
                edgeCount += degree;
        }
        return edgeCount / 2 == n;
}

void solve() {
        int n, m; cin >> n >> m;
        for (int i = 0; i < m; i++) {
                int u, v; cin >> u >> v;
                adj[u].push_back(v);
                adj[v].push_back(u);
        }
        int cycleCount = 0;
        for (int i = 1; i <= n; i++) {
                if (!visited[i]) {
                        vector<int> component;
                        dfs(i, component);
                        if (isCycle(component)) cycleCount++;
                }
        }
        cout << cycleCount << endl;
}

int main() {
        cin.tie(nullptr);
        ios::sync_with_stdio(0);
        solve();
        return 0;
}
