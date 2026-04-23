#include <bits/stdc++.h>
using namespace std;
#define int         long long
#define vi          vector<int>
#define pii         pair<int, int>

void FastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int removeDuplicates(string s) {
    string result = "";
    bool seen[256] = {};

    for (int i = 0; i < s.size(); i++){
        if (!seen[s[i]]){
            result += s[i];
            seen[s[i]] = true;
        }
    }
    return result.length();
}

void SakrDev() {
    
    string s; cin >>s;

    int size = removeDuplicates(s);
    
    if (size % 2 == 0){
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
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