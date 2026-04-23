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
    if (a + b >= 10){
        cout << "YES" << endl;
    } else if (a + c >= 10){
        cout << "YES" << endl;
    } else if (b + c >= 10){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
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