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
    int counter = 0 ;

    while(number--){
        int a,b,c; cin >> a >> b >> c;
        if (a + b + c >= 2){
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
    //cin >> t;
    while (t--) SakrDev();
}