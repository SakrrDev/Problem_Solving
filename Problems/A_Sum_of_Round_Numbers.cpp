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
    int counter = 0;

    // here, calculation the min number of addends
    for (int i = 0; i < s.size(); i++){
        if (s[i] != '0'){
            counter++;
        }
    }

    cout << counter << endl;

    for (int i = 0; i < s.size(); i++){
        if(s[i] != '0'){
            cout << s[i];

            for (int j = i + 1; j < s.size(); j++){
                cout << '0';
            }

            cout << " ";
        }
    }

    cout << endl;
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