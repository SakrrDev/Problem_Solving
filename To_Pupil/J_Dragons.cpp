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
    
    int s; cin >> s;
    int n; cin >> n;

    vector<pii> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }

    sort (v.begin(), v.end());

    for (int i = 0; i < n ; i++){
        if (v[i].first >= s){
            cout << "NO";
            return;
        } else {
            s += v[i].second;
        }
    }

    cout << "YES";
    
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