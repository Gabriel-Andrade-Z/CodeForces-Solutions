#include <bits/stdc++.h>
using namespace std;

int n, a, b, c;
vector<int> memo;

int dp(int i){
	if(i == 0) return memo[i] = 0;
	if(i < 0) return -1e5;
	if(memo[i] != -1) return memo[i];
	int cut = 1 + max({dp(i - a), dp(i - b), dp(i - c)});
	return memo[i] = cut;
}

void solve(){
	cin >> n >> a >> b >> c;
	memo.assign(n + 10,-1);
	cout << dp(n) << '\n';
}

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	solve();
	return 0;
}
