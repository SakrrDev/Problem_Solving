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
    int counter = 0;

    while (t--){
        string s; cin >> s;
        if (s == "Tetrahedron"){
            counter += 4;
        } else if (s == "Cube"){
            counter += 6;
        } else if (s == "Octahedron"){
            counter += 8;
        } else if (s == "Dodecahedron"){
            counter += 12;
        } else if (s == "Icosahedron") {
            counter += 20;
        } else {
            continue;
        }
    }

    cout << counter;
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