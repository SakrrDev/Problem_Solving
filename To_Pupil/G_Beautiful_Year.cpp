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
    int y; cin >> y;

    while (true) {
        y++;
        string s = to_string(y);

        string t = s;
        sort(t.begin(), t.end());

        bool ok = true;
        for (int i = 1; i < 4; i++) {
            if (t[i] == t[i - 1]) {
                ok = false;
                break;
            }
        }

        if (ok) {
            cout << y;
            return;
        }
    }
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