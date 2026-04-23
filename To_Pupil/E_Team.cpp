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
    int arr[number][3];

    for (int i = 0; i < number; i++){
        for (int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    int sum = 0;

    for (int i = 0; i < number; i++){
        int counter = 0;

        for (int j = 0; j < 3; j++){
            if (arr[i][j] == 1){
                counter++;
            }
        }

        if (counter >= 2){
            sum++;
        }
    }

    cout << sum;
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