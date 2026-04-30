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
    int arr[number] = {};
    int police = 0;
    int untreated = 0;

    for (int i = 0; i < number; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < number; i++){
       if (arr[i] > 0){
        police += arr[i];
       } else {
        if (police > 0){
            police--;
        } else {
            untreated++;
        }
       }
    }

    cout << untreated;
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