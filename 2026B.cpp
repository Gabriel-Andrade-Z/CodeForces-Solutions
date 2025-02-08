#include <bits/stdc++.h>

const int inf = 1e9;
const long long linf = 1e18;
const int MOD = 1e9 + 7;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define f first
#define s second
#define mkp make_pair

#define debug(x) cerr << #x << " = " << (x) << endl;

using namespace std;

using dd = double;
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using vpii = vector<pii>;

ll check(vector<ll>& a, int j) {
	int n = sz(a); ll dist = -linf;
	for (int i = 0;i < n - 1;i += 2) {
		if (i == j) {
			--i;
		} else {
			if (i + 1 == j) { dist = max(dist,a[i + 2] - a[i]); ++i; }
			else dist = max(dist,a[i + 1] - a[i]);
		}
	}
	return dist;
}

void solve() {
	int n; cin >> n; vll a(n,0);
	for (ll& i : a) cin >> i;
	if (n == 1) { cout << "1\n"; return; }
	if (n % 2 == 0) {
		ll k = check(a,inf);
		cout << k << '\n';
	} else {
		ll k = linf;
		for (int i = 0;i < n;++i) {
			ll curr = check(a,i);
			k = min(k,curr);
		}
		cout << k << '\n';
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
