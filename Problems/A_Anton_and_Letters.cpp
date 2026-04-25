#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int, int>

void FastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void SakrDev()
{
    string s; getline(cin, s);
    
    set<char> st;

    for (char c : s)
    {
        if (isalpha(c))
            st.insert(c);
    }

    cout << st.size();
}

/*

*/

signed main()
{
    // UseFile();
    FastIO();
    int t = 1;
    // cin >> t;
    while (t--)
        SakrDev();
}