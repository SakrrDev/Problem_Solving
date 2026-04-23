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
    
    string s; cin >>s;
    int ac = 0, bc = 0;
    
    for (int i = 0; i < s.length(); i++){
        if (s[i] == 'A'){
            ac++;
        } else {
            bc++;
        }
    }

    
    if (ac > bc){
        cout << "A" << endl;
    } else {
        cout << "B" << endl;
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