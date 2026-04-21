#include <bits/stdc++.h>
using namespace std;

void FastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void SakrDev() {
    int n; cin >> n;

    string a, b;
    cin >> a >> b;

    int i = 0;
    int ans = 0;

    while (i < n) {
        if (a[i] == b[i]) {
            i++;
        } else {
            if (i + 1 < n) {
                int cost = (a[i] != a[i + 1]) + (b[i] != b[i + 1]);
                ans += min(1, cost);
                
                if (cost < 1) {
                    i += 2;
                } else {
                    i++;
                }
            } else {
                ans += 1;
                i++;
            }
        }
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) SakrDev();
}