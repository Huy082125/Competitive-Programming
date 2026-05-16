#include <bits/stdc++.h>
using namespace std;

long long t, n, x, y, k;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> t;
    while (t--) {
        cin >> n >> x >> y >> k;
        if (n<=3) cout << 1;
        else cout << min(abs(x-y), n-abs(x-y))+k;
        cout << "\n";
    }
}