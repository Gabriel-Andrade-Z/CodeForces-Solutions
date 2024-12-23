#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX;

void solve() {
	int n, mi = inf, ma = -inf; cin >> n;
	map<int,ll> m;
	for (int i = 0;i < n;++i) {
		int x; cin >> x;
		++m[x];
		mi = min(mi,x); ma = max(ma,x);
	}
	if (ma == mi) {
		cout << ma - mi << ' ' << (m[ma])*(m[ma] - 1)/2 << '\n';
	} else cout << ma - mi << ' ' << (m[ma]*m[mi]) << '\n';
}

int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	solve();
	return 0;
}
