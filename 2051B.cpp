#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, a, b, c; cin >> n >> a >> b >> c;
	int k = a + b + c, days = (n / k)*3, cnt = 0; n = n % k;
	if (n >= a && n != 0) { n -= a; ++cnt; }
	else if (n != 0) { n = 0; ++cnt; }
	if (n >= b && n != 0) { n -= b; ++cnt; }
	else if (n != 0) { n = 0; ++cnt; }
	if (n >= c && n != 0) { n -= c; ++cnt; }
	else if (n != 0) { n = 0; ++cnt; }
	cout << days + cnt << '\n';
}

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(0);
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
