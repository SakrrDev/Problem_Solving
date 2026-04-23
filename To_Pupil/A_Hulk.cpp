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
    
    for (int i = 1; i <= n; i++){
        if (i % 2 == 0){
            cout << "I love";
        } else {
            cout << "I hate";
        }
        if (i == n){
            cout << " it";
        } else {
            cout << " that ";
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