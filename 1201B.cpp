#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
	int n, k = 0; ll sum = 0; cin >> n;
	for (int i = 0;i < n;++i) {
		int x; cin >> x; k = max(k,x); sum += x;
	}
	if (sum % 2 == 0 && k <= sum/2) cout << "YES\n";
	else cout << "NO\n";
}

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(0);
	solve();
	return 0;
}
