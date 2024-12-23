#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s; cin >> s;
	int cnt_0 = count(s.begin(),s.end(),'0');
	int cnt_1 = count(s.begin(),s.end(),'1');
	int m = min(cnt_0,cnt_1);
	if (m % 2) cout << "DA\n";
	else cout << "NET\n";
}

int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
