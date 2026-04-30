#include <bits/stdc++.h>
using namespace std;

long long t, n, minnum, maxnum, g, re;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> t;
    while (t--) {
        cin >> n;
        re=0;
        vector<long long> a(n+1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        for (int i = 1; i < n; i++) {
            if (max(a[i+1], a[i])-min(a[i+1], a[i])==gcd(a[i+1], a[i])) re++;
        }
        cout << re << "\n";
    }
}