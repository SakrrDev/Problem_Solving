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
    

    int n; cin >> n;
    string s; cin >> s;

    int cnt = 0;

    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            cnt++;
        }
    }

    cout << cnt;

}

/*

*/

signed main() {
    // UseFile();
    FastIO();
    int t = 1;
    // cin >> t;
    while (t--) SakrDev();
}