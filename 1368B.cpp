#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
	ll k; cin >> k; string s = "codeforces";
	vector<int> freq(10,1);
	ll value = 1; int i = 0;
	while (value < k) {
		value /= freq[i];
		++freq[i];
		value *= freq[i];
		i = (i + 1) % 10;
	}
	for (int i = 0;i < 10;++i) cout << string(freq[i],s[i]); cout << '\n';
}

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(0);
	solve();
	return 0;
}
