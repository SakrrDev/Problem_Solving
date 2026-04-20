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
    
    int  number; cin >> number;
    int x[number], y[number], z[number];

    for (int i = 0; i < number; i++){
        cin >> x[i] >> y[i] >> z[i];
    }

    for (int i = 0; i < number; i++){
        int sumX = 0, sumY = 0, sumZ = 0;
        for (int j = 0; j < number; j++){
            if (i == j){
               continue;
            } if (x[i] == x[j]){
                sumX++;
            } if (y[i] == y[j]){
                sumY++;
            } if (z[i] == z[j]){
                sumZ++;
            }
        }
        cout << sumX << " " << sumY << " " << sumZ << endl;
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