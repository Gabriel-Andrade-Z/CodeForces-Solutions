#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
	int n, cnt = 0; ll curr = 0; cin >> n;
    	vector<int> a(n);
    	for (int& i : a) cin >> i;
    	set<ll> sums; sums.insert(0);
    	for (int i = 0; i < n; ++i) {
        	curr += a[i];
        	if (sums.count(curr)) { ++cnt; sums.clear(); sums.insert(0); curr = 0; }
        	sums.insert(curr);
    	}
    	cout << cnt << '\n';
}

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(0);
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
