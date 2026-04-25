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
    vector<int> v(n);

    int sum = 0;
    int min_odd = 1e18;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];

        if (v[i] % 2 == 1) {
            min_odd = min(min_odd, v[i]);
        }
    }

    if (sum % 2 == 0) {
        cout << sum;
    } else {
        if (min_odd == 1e18) cout << 0; 
        else cout << sum - min_odd;
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