#include <bits/stdc++.h>
using namespace std;
#define int         long long
#define vi          vector<int>
#define pii         pair<int, int>

void FastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int SakrDev() {
    
    int N; cin >> N;
 
    if (N == 1) {
        cout << 0 << endl;
        return 0;
    } else if (N == 2) {
        cout << 1 << endl;
        return 0;
    }
 
    long long a = 0, b = 1, c;
    for (int i = 3; i <= N; i++) {
        c = a + b;
        a = b;
        b = c;
    }
 
    cout << b << endl;
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