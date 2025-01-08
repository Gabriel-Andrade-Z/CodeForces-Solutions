#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
    	map<string, int> final_scores;
    	vector<pair<string, int>> rounds(n);
    	for (int i = 0; i < n; ++i) {
        	string name; int score; cin >> name >> score;
        	rounds[i] = {name, score}; final_scores[name] += score;
    	}
	int max_score = INT_MIN;
	for (const auto& [name, score] : final_scores) max_score = max(max_score, score);
    	map<string, int> current_scores;
    	for (const auto& [name, score] : rounds) {
        	current_scores[name] += score;
        	if (current_scores[name] >= max_score && final_scores[name] == max_score) { cout << name << '\n'; return; }
    	}
}

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(0);
	solve();
	return 0;
}
