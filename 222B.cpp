#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, m, q; cin >> n >> m >> q;
	vector<int> r(n,0), c(m,0), ans;
	for(int i = 0;i < n;++i) r[i] = i;
	for(int i = 0;i < m;++i) c[i] = i;
	vector<vector<int>> a(n,vector<int>(m));
	for(int i = 0;i < n;++i){
		for(int j = 0;j < m;++j){
			cin >> a[i][j];
		}
	}
	while(q--){
		int x, y; char p; cin >> p >> x >> y; --x; --y;
		if(p == 'r') swap(r[x],r[y]);
		if(p == 'c') swap(c[x],c[y]);
		if(p == 'g') ans.push_back(a[r[x]][c[y]]);
	}
	for(int& x : ans) cout << x << '\n';
}

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	solve();
	return 0;
}
