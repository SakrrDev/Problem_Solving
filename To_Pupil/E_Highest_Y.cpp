#include <bits/stdc++.h>
using namespace std;
#define int         long long
#define vi          vector<int>
#define pii         pair<int, int>

void FastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int SakrDev(void) {

    int number; cin >> number;
    pii p[number];
    for (int i = 0; i < number; i++){
        cin >> p[i].second >> p[i].first;
    }

    sort(p, p + number);

    for (int i = number - 1; i >= 0; i--){
        cout << p[i].second << " " << p[i].first << endl;
    }

}
/*

*/

signed main() {
    // UseFile();
    FastIO();
    int t = 1;
    //cin >> t;
    while (t--) SakrDev();
}