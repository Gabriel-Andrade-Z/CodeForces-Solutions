#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

void solve() {
	int n, d; cin >> n >> d;
	vector<pii> a(n);
	for (auto &it : a) cin >> it.f >> it.s;
	sort(a.begin(),a.end());
	//for (auto it : a) cout << it.f << ' '; cout << '\n';
	int l = 0, r = 0;
	ll curr = 0, sum = 0;
	while (r < n) {
		curr += a[r].s;
		while (a[r].f - a[l].f >= d) {
			curr -= a[l].s;
			++l;
		}
		sum = max(sum,curr);
		++r;
	}
	cout << sum << '\n';
}

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(0);
	solve();
	return 0;
}
