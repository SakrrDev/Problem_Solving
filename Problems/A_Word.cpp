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
    int lower = 0;
    int upper = 0;

    for (int i = 0; i < s.length(); i++){
        if (s[i] >= 65 && s[i] <= 90){
            // upper latters 
            upper++;
        } else if (s[i] >= 97 && s[i] <= 122){
            // lower latters
            lower++;
        }
    }

    for (int i = 0; i < s.length(); i++){
        if (upper == lower){
                s[i] = tolower(s[i]);

        } else if (upper > lower){
            s[i] = toupper(s[i]);
        } else {
            s[i] = tolower(s[i]);
        }
    }

    cout << s;
    
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