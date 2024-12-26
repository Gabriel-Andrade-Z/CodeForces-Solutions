#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll lcm(ll a, ll b) {
	return (a / (ll)(__gcd(a,b)))*b;
}

void solve() {
	ll x, y; cin >> x;
	for (ll i = 1;i * i <= x;++i) {
		if (x % i == 0 && lcm(i,x/i) == x) y = i;
	}
	cout << y << " " << x/y << '\n';
}

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(0);
	solve();
	return 0;
}
