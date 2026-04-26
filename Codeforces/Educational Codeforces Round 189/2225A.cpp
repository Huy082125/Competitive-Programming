#include <bits/stdc++.h>
using namespace std;

long long t, x, y;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> t;
    while (t--) {
        cin >> x >> y;
        if (y%x!=0||x*2>=y) cout << "NO";
        else cout << "YES";
        cout << "\n";
    }
}