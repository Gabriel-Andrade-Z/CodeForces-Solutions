#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;

int limit;

int dp(int i, int k);

void solve() {
	int n; cin >> n;
	vector<int> arr(n,0);
	for (int& i : arr) cin >> i;
	sort(arr.begin(),arr.end());
	for (int i : arr) cout << i << ' '; cout << '\n';
}

int main() {
    	ios::sync_with_stdio(false);
    	cin.tie(nullptr);
	int t; cin >> t;
    	while (t--) solve();
    	return 0;
}
