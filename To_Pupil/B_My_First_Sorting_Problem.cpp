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
    
    pii p;
    cin >> p.first >> p.second;

    if (p.first > p.second){

        cout << p.second << " " << p.first << endl;

    } else {
        cout << p.first << " " << p.second << endl;
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