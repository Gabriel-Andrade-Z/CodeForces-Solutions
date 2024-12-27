#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, k;
vector<ll> a;

bool check(ll m) {
	ll cnt = 0;
	for (int i = n/2;i < n;++i)
		if (m > a[i]) {
			cnt += (m - a[i]);
			if (cnt > k) return false;
		} else break;
	return cnt <= k;
}

void solve() {
	cin >> n >> k; a.assign(n,0);
	for (ll& i : a) cin >> i;
	sort(a.begin(),a.end());
	ll l = a[n/2], r = 2e9 + 1;
	while (r >= l) {
		ll m = (r + l) >> 1;
		if (check(m)) l = m + 1;
		else r = m - 1;
	}
	cout << l - 1 << '\n';
}

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(0);
	solve();
	return 0;
}
