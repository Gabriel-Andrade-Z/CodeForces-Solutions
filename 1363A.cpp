#include <bits/stdc++.h>
using namespace std;

int n, x;
vector<int> a;
vector<vector<vector<int>>> memo;

int dp(int i, int sum, int cnt) {
        if (cnt == x) return (sum % 2 == 1 ? 1 : 0);
        if (i == n) return 0;
        if (memo[i][sum % 2][cnt] != -1) return memo[i][sum % 2][cnt];
        bool res = dp(i + 1, sum + a[i], cnt + 1) || dp(i + 1, sum, cnt);
        return memo[i][sum % 2][cnt] = res;
}

void solve() {
        cin >> n >> x;
        a.assign(n, 0);
        memo.assign(n + 1, vector<vector<int>>(2, vector<int>(x + 1, -1)));
        for (int& i : a) cin >> i;
        cout << (dp(0, 0, 0) == 1 ? "Yes\n" : "No\n");
}

int main() {
        cin.tie(0); cout.tie(0);
        ios::sync_with_stdio(0);
        int t; cin >> t;
        while (t--) solve();
        return 0;
}
