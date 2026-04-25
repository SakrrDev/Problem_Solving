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
    
    int arr[4];
    set<int> s;

    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
        s.insert(arr[i]);
    }

    cout << 4 - s.size() << "\n";

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