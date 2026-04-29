#include <bits/stdc++.h>
using namespace std;

const long long maxn=1e5+1;

long long n, a, b, c;
long long dp[maxn][3];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a >> b >> c;
        if (i==1) {
            dp[i][0]=a;
            dp[i][1]=b;
            dp[i][2]=c;
        }
        else {
            dp[i][0]=max(dp[i-1][1], dp[i-1][2])+a;
            dp[i][1]=max(dp[i-1][0], dp[i-1][2])+b;
            dp[i][2]=max(dp[i-1][0], dp[i-1][1])+c;
        }
    }
    cout << max({dp[n][0], dp[n][1], dp[n][2]});
}