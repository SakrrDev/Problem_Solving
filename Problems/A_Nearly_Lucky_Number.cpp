#include <bits/stdc++.h>
using namespace std;
#define int         long long
#define vi          vector<int>
#define pii         pair<int, int>

void FastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

bool islucky(int counter){
    if (counter == 0){
        return false;
    } 
    while (counter > 0){
        int t = counter % 10;
        if (t != 4 && t != 7){
            return false;
        }
        counter /= 10;
    }
    return true;
}
void SakrDev() {
    string number; cin >> number;
    int counter = 0;
    for (int i = 0; i < number.length(); i++){
        if (number[i] == '4' || number[i] == '7'){
            counter++;
        } else {
            continue;
        }
    }

    if (islucky(counter)){
        cout << "YES";
    } else {
        cout << "NO";
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