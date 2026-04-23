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
    
    int a,b,c; cin >> a >> b >> c;
    if (a > b){
        swap(a,b);
    } 
    if (b > c){
        swap(b,c);
    }
    if (a > b){
        swap(a , b);
    }

    if (a + b > c){
        cout << 0 << endl;
    } else {
        cout << c - (a + b) + 1 << endl;
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