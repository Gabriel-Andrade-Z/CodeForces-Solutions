#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
	ll n, k; cin >> n >> k;
	vector<ll> div;
	for (ll i = 1;i*i <= n;++i) {
		if (n % i == 0) {
			div.push_back(i);
			if (i != n/i) div.push_back(n / i);
		}
	}
	sort(div.begin(),div.end());
	if (k - 1 >= div.size()) cout << "-1\n";
	else cout << div[k - 1] << '\n';
}

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(0);
	solve();
	return 0;
}
