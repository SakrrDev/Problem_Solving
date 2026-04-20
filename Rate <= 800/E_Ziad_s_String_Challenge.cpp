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
    
    string S; cin >> S;
    int y = 0, e = 0, s = 0;

    for (int i = 0; i < S.length(); i++){
        if (S[i] == 'Y'){
            y++;
        } else if (S[i] == 'e'){
            e++; 
        } else if (S[i] == 's'){
            s++;
        }
    }
    if(y >= 1 && e >= 1 && s >= 1){
        cout << "Ziad eld3eef";
    } else {
        cout << "Ziad is weak";
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