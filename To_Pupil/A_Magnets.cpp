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
    
    int number; cin >> number;

    string s; cin >> s;
    int counter = 1;

    string c;

    for (int i = 1; i < number; i++){
        cin >> c;
        if (c != s){
            counter++;
        }
        s = c;
    }

    cout << counter << endl;

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