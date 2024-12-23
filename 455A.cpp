#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> memo;

ll dp(int x, vector<ll>& freq) {
    	if (x <= 0) return 0;
    	if (memo[x] != -1) return memo[x];
    	ll pick = freq[x] * x + dp(x - 2, freq);
    	ll skip = dp(x - 1, freq);
    	return memo[x] = max(pick, skip);
}

void solve() {
    	int n; cin >> n;
    	vector<ll> freq(1e5 + 1,0);
   	while (n--) {
        	int x; cin >> x; ++freq[x];
    	}
    	memo.assign(100001, -1);
    	cout << dp(1e5,freq) << '\n';
}

int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	solve();
	return 0;
}
