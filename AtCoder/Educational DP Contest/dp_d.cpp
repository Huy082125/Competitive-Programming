#include <bits/stdc++.h>
using namespace std;

const long long maxn=101;
const long long maxw=1e5+1;

long long n, W;
long long w[maxn];
long long v[maxn];
long long dp[maxn][maxw];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> n >> W;
    for (int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= W; j++) {
            if (w[i]>j) dp[i][j]=dp[i-1][j];
            else dp[i][j]=max(dp[i-1][j], dp[i-1][j-w[i]]+v[i]);
        }
    }
    cout << dp[n][W];
}