#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s; cin >> s;
	set<char> a;
	for (char c : s) a.insert(c);
	cout << s.size() - a.size() <<'\n';
}

int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	solve();
	return 0;
}
