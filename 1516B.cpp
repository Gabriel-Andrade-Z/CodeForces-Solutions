#include <bits/stdc++.h>
using namespace std;

//   0 1 1 2 3
// 0 0 1 0 2 1

void solve() {
	int n; cin >> n;
	vector<int> a(n,0), p(n + 1,0);
	for (int i = 0;i < n;++i) { cin >> a[i]; p[i + 1] = p[i] xor a[i]; }
	for (int i = 1;i <= n;++i)
		for (int j = i + 1;j <= n;++j) {
			if (j - i == 1 && p[i] == (p[n] xor p[i])) { cout << "YES\n"; return; }
			if (p[i] == (p[j - 1] xor p[i]) && p[i] == (p[n] xor p[j - 1])) { cout << "YES\n"; return; }
		}
	cout << "NO\n";
}

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(0);
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
