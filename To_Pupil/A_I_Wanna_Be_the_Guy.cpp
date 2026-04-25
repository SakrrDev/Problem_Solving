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
    int p1; cin >> p1;
    int x1[p1] = {};
    vector<int> freq(number + 1, 0);

    for (int i = 0; i < p1; i++){
        cin >> x1[i];
        freq[x1[i]]++;
    }

    int p2; cin >> p2;
    int y2[p2] = {};

    for (int i = 0; i < p2; i++){
        cin >> y2[i];
        freq[y2[i]]++;
    }

    bool flag = true;

    for (int i = 1; i <= number; i++){
        if (freq[i] == 0){
            flag = false;
            break;
        }
    }

    if (flag){
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
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