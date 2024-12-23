#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll fast_exp(ll b, ll e) {
	if (e == 0) return 1;
	ll half = fast_exp(b,e/2);
	half = (half * half);
	if (e % 2) half = (half * b);
	return half;
}

void solve() {
	ll n; cin >> n;
	if (n % 2) { cout << "0\n"; return; }
	cout << fast_exp(2,n/2) << '\n';
}

int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	solve();
	return 0;
}
