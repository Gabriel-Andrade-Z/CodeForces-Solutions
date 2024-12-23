#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int k, l1, r1, l2, r2; cin >> k >> l1 >> r1 >> l2 >> r2;
	ll cnt = 0;
	for (ll p = 1;p <= r2;p *= k) {
		int x1 = max(l1,(int)((l2 + p - 1)/p)), x2 = min(r1,(int)(r2/p));
		if (x1 <= x2) cnt += (x2 - x1 + 1);
		if (p > r2/k) break;
	}
	cout << cnt << '\n';
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
