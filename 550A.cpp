#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s; cin >> s;
	int pA = s.find("AB"); int pB = s.find("BA", pA + 2);
	if (pA != string::npos && pB != string::npos) { cout << "YES\n"; return; }
	pB = s.find("BA"); pA = s.find("AB", pB + 2);
	if (pA != string::npos && pB != string::npos) { cout << "YES\n"; return; }
	cout << "NO\n";
}

int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	solve();
	return 0;
}
