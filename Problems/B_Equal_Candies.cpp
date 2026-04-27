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
    while(t--){
        int box; cin >> box;
        int arr[box] = {};
        int min = 10e7;

        for (int i = 0; i < box; i++){
            cin >> arr[i];
            if (arr[i] < min){
                min = arr[i];
            }
        }

        int result = 0;
        for (int i = 0; i < box; i++){
            result += (arr[i] - min);
        }

        cout << result << endl;
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