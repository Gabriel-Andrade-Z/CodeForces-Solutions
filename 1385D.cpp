#include <bits/stdc++.h>
using namespace std;

// Conta quantos caracteres são diferentes do esperado na sequência c-good
int contagem(const string& s, char start) {
    int cnt1 = 0, cnt2 = 0, n = s.size();
    char c1 = start, c2 = start; // c2 começa do final da sequência reversa
    int step = n / 2;

    for (int i = 0; i < n; i += step) {
        for (int j = i; j < i + step && j < n; ++j) {
            if (s[j] != c1) ++cnt1; // Contagem normal (abc...)
            if (s[j] != c2) ++cnt2; // Contagem reversa (...cba)
        }
        ++c1;
        --c2;
        if (step > 1) step /= 2;
    }

    return min(cnt1, cnt2);
}

void solve() {
    int n;
    string s;
    cin >> n >> s;

    // Transformar a primeira metade em 'a' e aplicar sequência na segunda
    int op1 = contagem(s.substr(0, n / 2), 'a') + count(s.begin() + n / 2, s.end(), 'a');

    // Transformar a segunda metade em 'a' e aplicar sequência na primeira
    int op2 = contagem(s.substr(n / 2, n / 2), 'a') + count(s.begin(), s.begin() + n / 2, 'a');

    cout << min(op1, op2) << '\n';
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
