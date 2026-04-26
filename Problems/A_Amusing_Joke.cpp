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
    
    string s1,s2,s3; cin >> s1 >> s2 >> s3;

    string fullstring = s1 + s2;

    sort(fullstring.begin(), fullstring.end());
    sort(s3.begin(), s3.end());

    if (fullstring == s3){
        cout << "YES";
    } else {
        cout << "NO";
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