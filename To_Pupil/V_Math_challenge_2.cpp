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
    
    string N; cin >> N;
 
    int sum = 0;
    for (char c : N) {
        sum += c - '0'; 
    }
 
    if (sum % 3 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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