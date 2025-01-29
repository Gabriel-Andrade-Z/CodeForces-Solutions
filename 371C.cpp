#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int nb, ns, nc, pb, ps, pc, B, S, C; ll r;

bool check(ll m) {
        ll cnt_B = max(0LL,B * m - nb), cnt_S = max(0LL,S * m - ns), cnt_C = max(0LL,C * m - nc);
	return cnt_B * pb + cnt_S * ps + cnt_C * pc <= r;
}

void solve() {
        string s; cin >> s; B = 0, S = 0, C = 0;
        cin >> nb >> ns >> nc >> pb >> ps >> pc >> r;
        for (char c : s) {
                if (c == 'B') ++B;
                else if (c == 'S') ++S;
                else if (c == 'C') ++C;
        }
        ll left = 0, right = 1e12 + 100, ans = 0;
        while (right >= left) {
                ll mid = (right + left) >> 1;
                if (check(mid)) left = mid + 1, ans = mid;
                else right = mid - 1;
        }
        cout << ans << '\n';
}

int main() {
        cin.tie(nullptr);
        ios::sync_with_stdio(0);
        solve();
        return 0;
}
