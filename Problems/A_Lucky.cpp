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
    string number; cin >> number;
    int _first = number[0] + number[1] + number[2];
    int _second = number[3] + number[4] + number[5];

    if (_first == _second){
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