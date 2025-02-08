#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

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

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define debug(x) cerr << #x << " = " << (x) << endl;

using namespace std;
using namespace __gnu_pbds;

using dd = double;
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using vpii = vector<pii>;

void solve() {
	int n; cin >> n; vpii a;
	ordered_set b; ll cnt = 0;
	for (int i = 0;i < n;++i) {
		int x, y; cin >> x >> y;
		a.pb({x,y}); b.insert(y);
	}
	sort(all(a));
	//for (auto [x,y] : a) cout << x << ' '; cout << '\n';
	for (int i = 0;i < n;++i) {
		int x = a[i].s;
		int id = b.order_of_key(x);
		b.erase(x);
		// debug(id);
		cnt += id;
	}
	cout << cnt << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
