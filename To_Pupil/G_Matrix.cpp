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
    
    int n ; cin >> n;
    int arr[n][n];

    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    int primary_diagonal = 0;
    int secondary_diagonal = 0;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == j){
                primary_diagonal += arr[i][j]; 
            }
            if (i + j == n - 1){
                secondary_diagonal += arr[i][j];
            }
        }
    }

    cout << abs((secondary_diagonal - primary_diagonal));
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