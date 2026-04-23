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
    while(t--){
        string s; cin >> s;
        reverse(s.begin(), s.end());
        for (int i = 0; i < s.length(); i++){
            if (s[i] == 'q'){
                s[i] = 'p';
            } else if (s[i] == 'p'){
                s[i] = 'q';
            } 
        }
        cout << s << endl;
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