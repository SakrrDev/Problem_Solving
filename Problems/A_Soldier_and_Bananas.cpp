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

    int k, n, w;  cin >> k >> n >> w;

    int sum = k * (w * (w + 1) / 2);

    if (sum > n) {
        cout << sum - n;
    } else {
        cout << 0;
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