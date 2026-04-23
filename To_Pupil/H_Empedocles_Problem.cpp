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
    string first , element , temp;

    for (int i = 0; i < 4; i++){
        cin >> temp;
        first += temp;
    }
    
    bool flag = true;

    for (int i = 1; i < n; i++){
        element = "";
        for (int j = 0; j < 4; j++){
            cin >> temp;
            element += temp;
        }
        if (element != first) {
            flag = false;
        }
    }
    cout << (flag? "Empedocles was right" : "you were right");
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