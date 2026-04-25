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
    
    int t; cin >> t;
    int sum = 0;
    for (int i = 1; i <= t; i++){
        string s; cin >> s;
        if (s == "X++"){
            sum++;
        } else if (s == "++X"){
            ++sum;
        } else if (s == "X--"){
            sum--;
        } else if (s == "--X"){
            --sum;
        }
    }

    cout << sum;
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