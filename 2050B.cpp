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

bool check(vi& a, int m, int n) {
	set<int> s;
	for (int i = 0;i < n - 2;++i) {
		if (a[i] == m) continue;
		int diff = abs(a[i] - m);
		// cout << diff << '\n';
		if (a[i] > m) {
			a[i] = m; a[i + 2] += diff;
		} else {
			a[i] = m; a[i + 2] -= diff;
		}
	}
	for (int i = 0;i < n;++i) { s.insert(a[i]);} //debug(a[i]);
	if (s.size() == 1) return true;
	else return false;
}

void solve() {
	int n; cin >> n;
	int lo = inf, hi = -inf, ans = -1;
	ll sum = 0;
	vi a(n,0);
	for (int i = 0;i < n;++i) {
		int x; cin >> x;
		a[i] = x; sum += x;
		lo = min(lo,x), hi = max(hi,x);
	}
	int target = (sum/n);
	if (check(a,target,n)) cout << "YES\n";
	else cout << "NO\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
