#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

void solve() {
	int n, q; ll sum = 0; cin >> n >> q;
	vector<int> a(n,0), freq(n,0);
	vector<ll> c(n,0);
	vector<pii> b(n), querys;
	for (int& i : a) cin >> i;
	while (q--) {
		int l, r; cin >> l >> r; --l, --r;
		++freq[l]; if (r + 1 < n) --freq[r + 1];
		querys.push_back({l,r});
	}
	for (int i = 1;i < n;++i) freq[i] += freq[i - 1];
	for (int i = 0;i < n;++i) b[i] = {freq[i],i};
	sort(a.begin(),a.end(),greater<int>()); sort(b.begin(),b.end(),greater<pii>());
	for (int i = 0;i < n;++i) c[b[i].s] = a[i];
	for (int i = 1;i < n;++i) c[i] += c[i - 1];
	for (auto& [l,r] : querys) {
		if (l) sum += c[r] - c[l - 1];
		else sum += c[r];
	}
	cout << sum << '\n';
}

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(0);
	solve();
	return 0;
}
