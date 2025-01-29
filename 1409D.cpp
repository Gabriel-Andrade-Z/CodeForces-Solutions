#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
	ll n, k; int s, sum = 0; cin >> n >> s; k = n;
        vector<int> a;
        while (k > 0) {
                int x = (k % 10); a.push_back(x); k /= 10; sum += x;
        }
        ll cnt = 0;
        for (int i = 0; i < a.size(); ++i) {
                if (sum <= s) break;
                ll curr = pow(10, i), value = (10 - a[i]);
                if (a[i] == 0) continue;
                cnt += value * curr; sum -= a[i]; a[i] = 0;
                if (i + 1 == a.size()) { a.push_back(1); sum += 1; }
		else { ++a[i + 1]; sum += 1; }
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
