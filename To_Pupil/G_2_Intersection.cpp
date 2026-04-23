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
    
    int l1,r1,l2,r2; cin >> l1 >> r1 >> l2 >> r2;
    int mx = max(l1,l2);
    int mn = min(r1,r2);

    if (mx > mn){
        cout << -1;
    } else {
        cout << mx << " " << mn;
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