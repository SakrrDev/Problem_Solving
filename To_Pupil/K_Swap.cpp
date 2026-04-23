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
    int arr[number];
 
    for(int i = 0; i < number; i++) {
        cin >> arr[i];
    }
 
    int maxIndex = 0, minIndex = 0;
    
    for(int i = 0; i < number; i++) {
        if(arr[i] > arr[maxIndex]) maxIndex = i;
        if(arr[i] < arr[minIndex]) minIndex = i;
    }
 
    swap(arr[maxIndex], arr[minIndex]);
 
    for(int i = 0; i < number; i++) {
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