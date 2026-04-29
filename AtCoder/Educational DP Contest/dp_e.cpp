#include <bits/stdc++.h>
using namespace std;

const long long maxn=101;
const long long maxv=1e5+1;

long long n, W, sum, re;
long long w[maxn];
long long v[maxn];
long long dp[maxn][maxv];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> n >> W;
    for (int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
        sum+=v[i];
    }
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= sum; j++) {
            dp[i][j]=W+1;
        }
    }
    for (int i = 1; i <= n; i++) {
        dp[i][0]=0;
        dp[i][v[i]]=w[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            dp[i][j]=min(dp[i][j], dp[i-1][j]);
            if (j>=v[i]) dp[i][j]=min(dp[i][j], dp[i-1][j-v[i]]+w[i]);
        }
    }
    for (int i = 1; i <= sum; i++) {
        if (dp[n][i]<=W) re=i;
    }
    cout << re;
}