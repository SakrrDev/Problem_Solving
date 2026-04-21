#include <bits/stdc++.h>
using namespace std;
#define int         long long
#define vi          vector<int>
#define pii         pair<int, int>

void FastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}


void SakrDev() {
    string s; cin >> s;

    int bad = 0;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            bad++;
        }
    }

    if (bad <= 2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
/*

*/

signed main() {
    // UseFile();
    FastIO();
    int t = 1;
    cin >> t;
    while (t--) SakrDev();
}