#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll sum_seq(int k, int n) {
    	return (ll) n * (2LL * k + n - 1) / 2;
}

bool check(int k, int m, ll sum) {
    	ll p = sum_seq(k, m), s = sum - p;
    	return p < s;
}

void solve() {
    	int n, k; cin >> n >> k;
    	ll sum = sum_seq(k, n);
    	int l = 1, r = n;
   	 while (r >= l) {
        	int m = (r + l) >> 1;
        	if (check(k, m, sum)) l = m + 1;
        	else r = m - 1;
    	}
    	ll a = sum_seq(k, r), b = sum_seq(k, r + 1);
    	cout << min(abs(sum - 2 * a), abs(sum - 2 * b)) << '\n';
}

int main() {
    	cin.tie(nullptr);
	ios::sync_with_stdio(0);
    	int t;cin >> t;
    	while (t--) solve();
    	return 0;
}
