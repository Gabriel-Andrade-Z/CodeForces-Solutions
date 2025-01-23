#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, ans = 0; cin >> n;
	vector<int> roots;
	vector<vector<int>> graph(n + 1);
	for (int u = 1;u <= n;++u) {
		int v; cin >> v;
		if (v == -1) roots.push_back(u);
		else graph[v].push_back(u);
	}
	for (int& i : roots) {
		int level = 0;
		queue<pair<int,int>> q; q.push({i,1});
		while (!q.empty()) {
			auto [node,depth] = q.front(); q.pop();
			level = depth;
			for (int child : graph[node]) q.push({child,depth + 1});
		}
		ans = max(ans,level);
	}
	cout << ans  << '\n';
}

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(0);
	solve();
	return 0;
}
