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
    
    int a,b,c; cin >> a >> b >> c;
    vi v = {a, b, c};

    sort(v.begin(),v.end());

    for (int i = 0; i < 3; i++){
        cout << v[i] << " ";
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