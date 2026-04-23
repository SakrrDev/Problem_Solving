#include <bits/stdc++.h>
#include<iomanip>
using namespace std;
#define int         long long
#define vi          vector<int>
#define pii         pair<int, int>

void FastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void SakrDev() {
    
    double pi = 3.14159;
    double r; cin >> r;

    cout << fixed << setprecision(4) << "A=" << pi * r * r;
    
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