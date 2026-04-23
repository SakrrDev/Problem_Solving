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
    
    
        long long n, k;
        cin >> n >> k;
 
        if (n >= k * k && (n % 2 == k % 2)) {
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