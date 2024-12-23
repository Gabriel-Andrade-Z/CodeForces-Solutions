#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n; ll x, y, sum = 0, ans = 0;
    cin >> n >> x >> y;
    vector<ll> a;
    for (int i = 0; i < n; ++i) {
        ll k; cin >> k; sum += k; a.push_back(k);
    }
    sort(a.begin(), a.end());
    for (int i = 0;i < n;++i) {
        ll k = a[i], curr = sum - k;
        ll t_x = curr - y, t_y = curr - x;
        auto lw = lower_bound(a.begin() + i + 1,a.end(),t_x);
        auto up = upper_bound(a.begin() + i + 1,a.end(),t_y);
        ans += distance(lw,up);
    }
    cout << ans << '\n';
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
