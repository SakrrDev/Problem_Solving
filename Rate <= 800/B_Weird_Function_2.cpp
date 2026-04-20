#include <bits/stdc++.h>
using namespace std;
#define int         long long
#define vi          vector<int>
#define pii         pair<int, int>

void FastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

string val(int a, const string &b, const string &c){
    if (a == 1){
        return b + c;
    } else {
        return c + b;
    }
}
void SakrDev() {
    string a, b; cin >> a >> b;
    string result = "";
    
    result = val(1,val(1,val(0,a,b) + a , b), a + val(0, a + b, val(1,b,a)));
    
    cout << result << endl;

    
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