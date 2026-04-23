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
    
    char letter; cin >> letter;
    if (letter == 'c' || letter == 'o'
    || letter == 'd' || letter == 'e' ||
    letter == 'f' || letter == 'r' || letter == 's'
    ){
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