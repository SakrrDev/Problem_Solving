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
    int s1 = 0;
    int s2 = 0;
    for (int i = 1; i <= n; i++){
        s1 += i * i;
        s2 += i;
    }

    cout << (s2 * s2) - s1 << endl;
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