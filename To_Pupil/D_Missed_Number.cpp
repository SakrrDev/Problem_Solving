#include <bits/stdc++.h>
using namespace std;
#define int         long long
#define vi          vector<int>
#define pii         pair<int, int>

void FastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int a1 , a2 ,a3 , a4, a5;

int countFib(int a3){
    int count = 0;
    if(a3 == a1 + a2)
        count++;
    if(a4 == a2 + a3)
        count++;
    if(a5 == a3 + a4)
        count++;

    return count;
    
}

void SakrDev() {
    cin >> a1 >> a2 >> a4 >> a5;

    int ans1 = countFib(a1 + a2);
    int ans2 = countFib(a4 - a2);
    int ans3 = countFib(a5 - a4);

    cout << max(ans1 , max(ans2 , ans3)) << '\n';
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