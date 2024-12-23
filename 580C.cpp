#include <bits/stdc++.h>
using namespace std;

vector<int> a;

int dfs(int u, vector<vector<int>>& g, vector<bool>& vis, int control, int cnt) {
        vis[u] = true;
        if (a[u]) ++cnt;
        else cnt = 0;
        if (cnt > control) return 0;
        int res = 0;
        bool leaf = true;
        for (int v : g[u]) {
                if (!vis[v]) {
                        leaf = false;
                        res += dfs(v,g,vis,control,cnt);
                }
        }
        return leaf ? 1 : res;
}

void solve() {
        int n, m, cnt = 0; cin >> n >> m;
        a.assign(n + 1,0);
        vector<bool> visited(n + 1,false);
        vector<vector<int>> graph(n + 1);
        for (int i = 1;i <= n;++i) cin >> a[i];
        while (--n) {
                int u, v; cin >> u >> v;
                graph[u].push_back(v);
                graph[v].push_back(u);
        }
        cout << dfs(1,graph,visited,m,cnt) << '\n';
}

int main() {
        cin.tie(0); cout.tie(0);
        ios::sync_with_stdio(0);
        solve();
        return 0;
}
