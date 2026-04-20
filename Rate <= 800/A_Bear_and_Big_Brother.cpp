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
    
    int a,b; cin >> a >> b;
    int counter = 0;

    do
    {
        a *= 3;
        b *= 2;
        counter++;
    } while (a <= b);

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