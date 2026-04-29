#include <bits/stdc++.h>
using namespace std;

const long long maxn=3000;

long long n;
double p[maxn];
double dp[maxn][(maxn>>1)+1];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
        dp[i][0]=1;
    }
    dp[0][0]=1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= ((n>>1)+1); j++) {
            dp[i][j]=dp[i-1][j-1]*p[i]+dp[i-1][j]*(1-p[i]);
        }
    }
    cout << setprecision(10) << fixed << dp[n][(n>>1)+1];
}