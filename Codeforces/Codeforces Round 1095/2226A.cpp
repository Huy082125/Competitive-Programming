#include <bits/stdc++.h>
using namespace std;

const long long mod=676767677;

long long t, n, prod, best;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> t;
    while (t--) {
        cin >> n;
        vector<long long> a(n+1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        vector<long long> dp(n+1, LLONG_MAX);
        dp[0]=0;
        for (int i = 1; i <= n; i++) {
            best=(dp[i-1]+a[i])%mod;
            for (int j = i-1; j >= 1; j--) {
                prod=1;
                bool check=true;
                for (int k = j; k <= i; k++) {
                    if (k>j&&a[k-1]>a[k]) {
                        check=false;
                        break;
                    }
                    prod=(prod*a[k])%mod;
                }
                if (check) best=min(best, dp[j-1]+prod);
            }
            dp[i]=best;
        }
        cout << dp[n]%mod << "\n";
    }
}