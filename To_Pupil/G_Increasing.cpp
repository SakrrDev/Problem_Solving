#include <bits/stdc++.h>
using namespace std;
#define int         long long
#define vi          vector<int>
#define pii         pair<int, int>

void FastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int SakrDev() {
    int size; cin >> size;
    int arr[size] = {};

    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }

    sort (arr, arr + size);
    
    bool flag = false;

    for (int i = 1; i < size; i++){
        if (arr[i] == arr[i - 1]){
            flag = true;
            break;
        }
    }
    cout << (flag ? "NO" : "YES") << endl;
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