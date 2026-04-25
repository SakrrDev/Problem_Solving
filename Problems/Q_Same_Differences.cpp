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
    
    int t; cin >> t;
    int sum = 0;
    while(t--){
        
        int size; cin >> size;
        int arr[size];
    
        for (int i = 0; i < size; i++){
            cin >> arr[i];
        }
    
    
    
        for (int i = 0; i < size; i++){
            for (int j = 0; j < size; j++){
                if (i < j && arr[i] - arr[j] == j - i){
                    
                }
            }
        }
    }
    
}

/*

*/

signed main() {
    // UseFile();
    FastIO();
    int t = 1;
    //cin >> t;
    while (t--) SakrDev();
}