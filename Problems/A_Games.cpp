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
    
    int n; cin >> n;
    pii p[n];
    for (int i = 0; i < n; i++){
        cin >> p[i].first >> p[i].second;
    }

    int counter = 0;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i != j){

                if (p[i].first == p[j].second){
                    counter++;
                }
            } else {
                continue;
            }
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