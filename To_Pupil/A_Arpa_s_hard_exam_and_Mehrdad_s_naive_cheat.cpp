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
    int number; cin >> number;
    int ans = 0;

    ans = pow(1378,number);
    ans %= 10;

    cout  << ans;
}

/*

*/

signed main() {

    FastIO();
    int t = 1;
    // cin >> t;
    while (t--) SakrDev();
}