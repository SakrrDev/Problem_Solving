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

    double sum = 0;

    for (int i = 0; i < number; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    sum /= number;

    cout << fixed << setprecision(12) << sum << endl;

    
    
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