#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
const int inf = 1e9 + 1;
typedef pair<int, int> pii;

int n;
vector<pii> a;
vector<int> memo;

int dp(int i, int l) {
    	if (i == n - 1) return 0;
    	if (memo[i] != -1) return memo[i];
    	int r = (i + 1 < n) ? a[i + 1].f : inf;
    	int x = a[i].f, h = a[i].s;
    	int left = (x - h > l) ? 1 + dp(i + 1, x) : 0;
    	int right = (x + h < r) ? 1 + dp(i + 1, x + h) : 0;
    	int leave = dp(i + 1, x);
    	return memo[i] = max({left,right,leave});
}

void solve() {
    	cin >> n;
    	if (n == 1) { cout << "1\n"; return; }
	a.clear(); memo.assign(n + 1, -1);
    	for (int i = 0; i < n; ++i) {
        	int x, h; cin >> x >> h;
        	a.push_back({x, h});
    	}
    	cout << 2 + dp(1,a[0].f) << '\n';
}

int main() {
    	cin.tie(nullptr);
    	ios::sync_with_stdio(0);
    	solve();
    	return 0;
}
