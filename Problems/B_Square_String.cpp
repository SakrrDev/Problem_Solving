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
    int size = s.size();
    
    if (size % 2 != 0){
    cout << "NO" << endl;
    continue;
    }
    
    string s1 = s.substr(0, size / 2);
    string s2 = s.substr(size / 2);
    
    if (s1 == s2){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
   }
}

/*

*/

signed main() {
    // UseFile();
    FastIO();
    int t = 1;
    //cin >> t;
    while (t--) SakrDev();
}