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
    int n, m; cin >> n >> m;

    int ans = -1;
    int mx = -1;

    for (int i = 1; i <= n; i++) {
        int a; cin >> a;

        int times = (a + m - 1) / m;

        if (times >= mx) { 
            mx = times;
            ans = i;
        }
    }

    cout << ans;
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