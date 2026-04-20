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
    
    int n; cin >> n;
    int arr[n];

    for(int i = 0 ; i < n; i++)
        cin >> arr[i];


    int max_count = 0;
    int count = 0;
    for(int i = 0 ; i < n; i++) {
        if(arr[i] == 0)
            count++;
        else
            count = 0;
            
        max_count = max(max_count , count);
    }
    cout << max_count << '\n';
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