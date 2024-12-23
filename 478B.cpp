#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
        ll n, m, k_min, k_max; cin >> n >> m;
	k_max = (n - m + 1)*(n - m)/2;
	ll q = n/m, r = n % m;
	k_min = (r*(q + 1)*q)/2 + ((m - r)*q*(q - 1))/2;
	cout << k_min << ' ' << k_max << '\n';
}

int main() {
        cin.tie(0); cout.tie(0);
        ios::sync_with_stdio(0);
        solve();
        return 0;
}
