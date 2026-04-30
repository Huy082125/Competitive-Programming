#include <bits/stdc++.h>
using namespace std;

long long t, n, l, r;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> t;
    while (t--) {
        cin >> n;
        string s;
        cin >> s;
        l=0;
        r=0;
        for (int i = 0; i < n; i++) {
            if (s[i]=='(') l++;
            else r++;
        }
        if (l==r) cout << "YES";
        else cout << "NO";
        cout << "\n";
    }
}