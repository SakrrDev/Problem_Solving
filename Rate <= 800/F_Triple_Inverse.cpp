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
    for (int i = 0; i < s.length(); i++){
        if (isupper(s[i])){
            s[i] = tolower(s[i]);
        } else {
            s[i] = toupper(s[i]);
        }
    }     // step number 1

    reverse(s.begin(), s.end());  // step numebr 2

    // step number 3
    for (int i = 0; i < s.length(); i++){
        if(islower(s[i])){
            s[i] = 'z' - (s[i] - 'a');
        } else {
            s[i] = 'Z' - (s[i] - 'A');
        }
    }

    cout << s << endl;
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