
#include <bits/stdc++.h>
using namespace std;

void dfs2(int u, vector<vector<int>>& graph, vector<bool>& vis, unordered_map<int,int> m, map<pair<int,int>,bool> m2, int& cnt) {
	vis[u] = true;
	for (int v : graph[u]) {
		pair<int,int> p = {min(u,v),max(u,v)};
		if (m[u] != m[v] && !m2[p]) { m2[p] = 1; ++cnt; }
		if (!vis[v]) dfs2(v,graph,vis,m,m2,cnt);
	}
}

void dfs(int u, vector<vector<int>>& graph, vector<bool>& vis, set<int>& comp) {
        vis[u] = true;
        comp.insert(u);
        for (int v : graph[u]) if (!vis[v]) dfs(v,graph,vis,comp);
}

vector<set<int>> count_comp(int n,vector<vector<int>>& graph) {
        vector<bool> vis(n + 1,0);
        vector<set<int>> components;
        for (int i = 1;i <= n;++i)
                if (!vis[i]) {
                        set<int> comp;
                        dfs(i,graph,vis,comp);
                        components.push_back(comp);
                }
        return components;
}

void solve() {
        int n, m1, m2, cnt = 0; cin >> n >> m1 >> m2;
        vector<vector<int>> f(n + 1), g(n + 1);
        for (int i = 0;i < m1;++i) {
                int u, v; cin >> u >> v;
                f[u].push_back(v); f[v].push_back(u);
        }
        for (int i = 0;i < m2;++i) {
                int u, v; cin >> u >> v;
                g[u].push_back(v); g[v].push_back(u);
        }
        vector<set<int>> comp_f = count_comp(n,f), comp_g = count_comp(n,g), s;
        map<pair<int,int>,bool> mp1, mp2;
        unordered_map<int,int> map_f, map_g;
        int id = 0;
        for (auto& comp : comp_f) {
                for (int v : comp) map_f[v] = id; ++id;
        }
        id = 0;
        for (auto& comp : comp_g) {
                for (int v : comp) map_g[v] = id; ++id;
        }
	/*for (int i = 1;i <= n;++i) {
		cout << map_f[i] << ' ' << map_g[i] << '\n';
	}*/
	vector<bool> v1(n + 1,0), v2(n + 1,0);
	for (int i = 1;i < n;++i) {
		if (!v1[i]) dfs2(i,f,v1,map_g,mp1,cnt);
		if (!v2[i]) dfs2(i,g,v2,map_f,mp2,cnt);
	}
        cout << cnt << '\n';
}

int main() {
        cin.tie(nullptr);
        ios::sync_with_stdio(0);
        int t; cin >> t;
        while (t--) solve();
        return 0;
}
