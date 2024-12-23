#include <bits/stdc++.h>
using namespace std;

vector<int> a, memo;

int dp(int i, int n){
	if(memo[i] != -1) return memo[i];
	int cnt = 1;
	for(int j = 2*i + 1;j < n;j += (i + 1)){
		if(a[i] < a[j]) cnt = max(cnt,1 + dp(j,n));
	}
	return memo[i] = cnt;
}

void solve(){
	int n, ans = 1; cin >> n;
	a.assign(n,0); memo.assign(n + 10,-1);
	for(int& i : a) cin >> i;
	for(int i = 0;i < n;i++){
		ans = max(ans,dp(i,n));
	}
	cout << ans << '\n';
}

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
