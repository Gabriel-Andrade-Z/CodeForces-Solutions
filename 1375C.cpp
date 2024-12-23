#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
        vector<int> a(n);
        for (int& i : a) cin >> i;
        if (a[0] < a[n - 1]) cout << "YES\n";
        else cout << "NO\n";
}

int main() {
	cin.tie(0); cout.tie(0);
        ios::sync_with_stdio(0);
        int t; cin >> t;
        while (t--) solve();
        return 0;
}
