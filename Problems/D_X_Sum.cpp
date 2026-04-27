#include <bits/stdc++.h>
using namespace std;
#define int long long

void FastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

signed main() {
    FastIO();

    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));

        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                cin >> a[i][j];

        int ans = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {

                int sum = a[i][j];

                for(int x = i+1, y = j+1; x < n && y < m; x++, y++)
                    sum += a[x][y];

                for(int x = i-1, y = j-1; x >= 0 && y >= 0; x--, y--)
                    sum += a[x][y];

                for(int x = i+1, y = j-1; x < n && y >= 0; x++, y--)
                    sum += a[x][y];

                for(int x = i-1, y = j+1; x >= 0 && y < m; x--, y++)
                    sum += a[x][y];

                ans = max(ans, sum);
            }
        }

        cout << ans << "\n";
    }
}