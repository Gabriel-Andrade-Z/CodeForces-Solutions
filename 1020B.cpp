#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> p(n + 1,0);
	for (int i = 1;i <= n;++i) cin >> p[i];
	for (int i = 1;i <= n;++i) {
		int u = i;
		vector<bool> visited(n + 1,0);
		while (!visited[u]) {
			visited[u] = 1;
			u = p[u];
		}
		cout << u << ' ';
	}
	cout << '\n';
}

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(0);
	solve();
	return 0;
}
