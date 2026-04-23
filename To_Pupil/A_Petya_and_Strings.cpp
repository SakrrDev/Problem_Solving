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
    
    string s1, s2; cin >> s1 >> s2;
    

    for (int i = 0; i < s1.length(); i++){

        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);

        if (c1 < c2){
            cout << -1;
            return;
        } else if (c1 > c2){
            cout << 1;
            return;
        } 
    }

    cout << 0;

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