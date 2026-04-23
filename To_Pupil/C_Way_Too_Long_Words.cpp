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

    int size = s.length();
    if (size > 10){
        int counter = 0;
        for (int i = 1; i < size - 1; i++){
            counter++;
        }

        cout << s[0] << counter << s[size - 1] << endl;
    } else {
        cout << s << endl;
    }

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