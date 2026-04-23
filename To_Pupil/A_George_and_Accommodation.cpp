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
    int counter = 0;
    pii p[n];

    for (int i = 0; i < n; i++){
        cin >> p[i].first >> p[i].second;
    }

    for (int i = 0; i < n; i++){
        if (p[i].second - p[i].first >= 2){
            counter++;
        } else {
            continue;
        }
    }

    cout << counter;
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