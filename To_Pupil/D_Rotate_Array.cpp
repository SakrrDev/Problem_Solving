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
    
    int n; cin >> n;
    int k; cin >> k;
    int arr[n] = {};

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    reverse(arr + k, arr + n);

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

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