#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, m, cnt = 0, ans = 0; cin >> n >> m;
	bool flag = true;
	for (int i = 0;i < n;++i) {
		string s; cin >> s;
		if (cnt + s.size() <= m && flag) cnt += s.size(), ++ans;
		else flag = false;
	}
	cout << ans << '\n';
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int t; cin >> t;
	while (t--) solve();
	return 0;
}


