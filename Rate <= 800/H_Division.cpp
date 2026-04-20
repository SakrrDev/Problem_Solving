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
    
    int rate; cin >> rate;
    if (rate >= 1900){
        cout << "Division 1" << endl;
    } else if (rate >= 1600 && rate <= 1899){
        cout << "Division 2" << endl;
    } else if (rate >= 1400 && rate <= 1599){
        cout << "Division 3" << endl;
    } else {
        cout << "Division 4" << endl;
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