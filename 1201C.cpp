#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, k; cin >> n >> k;
	vector<int> a(n,0);
	for (int& i : a) cin >> i;
	sort(a.begin(),a.end());
	int curr = a[n/2], cnt = 1;
	// cout << curr << '\n';
	for (int i = n/2 + 1;i <= n;++i) {
		if (i == n) {
			if (k < cnt) break;
			while (k >= cnt) {
				++curr; k -= cnt;
			}
		}
		if (a[i] == curr) ++cnt;
		else {
			if (k < cnt) break;
			while (k >= cnt && curr != a[i]) {
				++curr; k -= cnt;
			}
			++cnt;
		}
	}
	cout << curr << '\n';
}

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(0);
	solve();
	return 0;
}
