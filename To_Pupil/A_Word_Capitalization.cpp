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
    string s; cin >> s;
    char c = s[0];

    if (char(c) >= 65 && char(c) <= 90){
        // capital latter
        cout << s;
        return;
    } else if (char(c) <= 122 && char(c) >= 90) {
        // lower latter
        s[0] = toupper(c);
        cout << s;
        return; 
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