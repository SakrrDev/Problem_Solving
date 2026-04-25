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
    
    string s;
        cin >> s;
 
        for (int i = 0; i < s.length(); i++) {
            int max_value = s[i], max_index = i;
 
            for (int j = 0; j < 9 and i + j < s.length(); j++) {
                if(max_value < s[i+j] - j) {
                    max_value = s[i+j] - j;
                    max_index = i+j;
                }
            }
 
            for (int j = max_index; j > i; j--) {
                s[j]--;
                swap(s[j], s[j - 1]);
            }
        }
 
        cout << s << endl;
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