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
    
    int size; cin >> size;
    int arr[size] = {};

    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
    
    for (int i = 0; i < size; i++){
        if (arr[i] <= 10){
            cout  << "A[" << i << "] = " << arr[i] << endl;
        }
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