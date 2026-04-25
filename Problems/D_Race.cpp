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
    int a,b,c,d; cin >> a >> b >> c >> d;
    int counter = 0;
    vi v = {a,b,c,d};
    for (int i = 1; i < 4; i++){
        if (v[i] > v[0]){
            counter++;
        }
    }
    cout << counter << endl;
    
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