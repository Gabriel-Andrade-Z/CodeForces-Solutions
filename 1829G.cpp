#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e6 + 10;

using ll = long long;

ll ans[MAXN];

void precompute() {
        vector<vector<ll>> a(1510,vector<ll>(1510,0));
        int curr1 = 1500, curr2 = 1500, k;
        for (int i = 1;i <= 1500;++i) {
                k = i;
                if (i > 1) a[i][1] = a[i - 1][2] - 1;
                if (i == 1) { a[i][1] = k; ++k; }
                for (int j = 2;j <= curr1;++j) {
                        if (i == 1) {
                                ll b = (a[i][j - 1] + k);
                                a[i][j] = b;
                                ++k;
                        } else {
                                a[i][j] = a[i - 1][j + 1] - 1;
                        }
                }
                --curr1;
        }
        //for (int i = 1;i <= curr2;++i) { for (int j = 1;j <= curr2;++j) cout << a[i][j] << ' '; cout << '\n'; }
        for (int i = 1;i <= 1500;++i) {
                for (int j = 1;j <= curr2;++j) {
                        ll b = a[i][j];
                        if (i == 1) a[i][j] = b * b + a[i][j - 1];
                        else a[i][j] = b * b + a[i][j - 1] + a[i - 1][j] - a[i - 1][j - 1];
                        ans[b] = a[i][j];
                }
                --curr2;
        }
}


void solve() {
	int n; cin >> n;
	cout << ans[n] << '\n';
}

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(0);
	precompute();
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
