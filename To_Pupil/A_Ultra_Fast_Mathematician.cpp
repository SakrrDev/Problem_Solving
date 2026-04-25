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

    string s1,s2; cin >> s1 >> s2;
    int size = s1.size();

    for (int i = 0; i < size; i++){
        if (s1[i] != s2[i]){
            cout << 1;
        } else {
            cout << 0;
        }
    }
    
}

/*
    size of s1 = size of s2
*/

signed main() {
    // UseFile();
    FastIO();
    int t = 1;
    // cin >> t;
    while (t--) SakrDev();
}