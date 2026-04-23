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
    
    int number; cin >> number;
    string arr[number];

    for (int i = 0; i < number; i++){
        cin >> arr[i];
    }

    bool ok = true;
for (int i = 0; i < number / 2; i++) {
    if (arr[i] != arr[number - i - 1]) {
        ok = false;
        break;
    }
}

if (ok == true){
    cout  << "YES";
} else {
    cout << "NO";
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