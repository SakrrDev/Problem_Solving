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
    int s; cin >> s;
    int x; cin >> x;
    int arr[s] = {};
    
    for (int i = 0; i < s; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < s; i++){
        if (arr[i] < x){
            cout << arr[i] << " ";
        }
    }

    for (int i = 0; i < s; i++){
        if (arr[i] > x){
            cout << arr[i] << " ";
        }
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