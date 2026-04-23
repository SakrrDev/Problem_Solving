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

    int min_size = number / 2;
    for (int i = 0; i < number; i++){
        cin >> arr[i];
    }

    sort(arr, arr + number);

    for (int i = 0; i < min_size; i++){
        cout << arr[i] << " ";
    }

    for (int i = min_size - 1; i >= 0; i--){
        cout << arr[i] << " ";
    }

    cout << endl;

    for (int i = number - 1; i >= min_size; i--){
        cout << arr[i] << " ";
    }

    for (int i = min_size; i < number; i++){
        cout << arr[i] << " ";
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