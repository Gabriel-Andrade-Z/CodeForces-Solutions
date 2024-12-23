#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
typedef pair<int,int> pii;

void solve() {
    	int n; cin >> n;
	priority_queue<pii> pq;
	map<int,int> m;
	for(int i = 0;i < n;i++){
		int x; cin >> x; m[x]++;
	}
	for(auto [x , y] : m) pq.push({y,x});
	while(pq.size() >= 2){
		pii i = pq.top(); pq.pop();
		pii j = pq.top(); pq.pop();
		i.f--; j.f--; n -= 2;
		if(i.f) pq.push(i);
		if(j.f) pq.push(j);
	}
	cout << n << '\n';
}

int main() {
    	cin.tie(0); cout.tie(0);
    	ios::sync_with_stdio(0);
    	int t; cin >> t;
    	while(t--) solve();
    	return 0;
}
