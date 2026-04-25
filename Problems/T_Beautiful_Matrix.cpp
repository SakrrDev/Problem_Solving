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
    
    int arr[5][5];
    int temp1 = 0;
    int temp2 = 0;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> arr[i][j];
        }
    }

    int a = 2;
    int b = 2;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (arr[i][j] == 1){
                temp1 = i;
                temp2 = j;
            }
        }
    }

    int sum = 0;
    sum = abs(a - temp1) + abs(b - temp2);
    cout << sum << endl;


}

/*

    a is i 
    b is j
    middle point when i = 2 && j = 2

*/

signed main() {
    // UseFile();
    FastIO();
    int t = 1;
    // cin >> t;
    while (t--) SakrDev();
}