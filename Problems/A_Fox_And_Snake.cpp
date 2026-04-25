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
   int n,m; cin >> n >> m;
   vector<vector<char>> arr(n, vector<char> (m));

   bool ifright = true;
   for (int i = 0; i < n; i++){
    if (i % 2 == 0){
        for (int j = 0; j < m; j++){
            arr[i][j] = '#';
            }
        } else {
            for (int j = 0; j < m; j++){
                arr[i][j] = '.';
            } 

            if (ifright){
                arr[i][m - 1] = '#';
            } else {
                arr[i][0] = '#';
            }

            ifright = !ifright; 
        }
   }

   for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
        cout << arr[i][j];
    }

    cout << endl;
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