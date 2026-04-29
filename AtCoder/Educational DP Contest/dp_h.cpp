#include <bits/stdc++.h>
using namespace std;

const long long maxh=1e3+1;
const long long mod=1e9+7;

long long h, w;
long long dp[maxh][maxh];
char c;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> h >> w;
    for (int i = 0; i <= h; i++) {
        dp[i][0]=0;
    }
    for (int i = 0; i <= w; i++) {
        dp[0][i]=0;
    }
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            cin >> c;
            if (i==1&&j==1) dp[i][j]=1;
            else if (c=='.') dp[i][j]=(dp[i-1][j]+dp[i][j-1])%mod;
            else dp[i][j]=0;
        }
    }
    cout << dp[h][w];
}