#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

void solve() {
	int n; cin >> n;
	ll fd = 0, fabc = 1;
	for (int i = 2;i <= n;++i) {
		ll new_fd = (3 * fabc) % MOD;
		ll new_fabc = (2 * fabc + fd) % MOD;
		fd = new_fd; fabc = new_fabc;
	}
	cout << fd << '\n';
}

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(0);
	solve();
	return 0;
}
