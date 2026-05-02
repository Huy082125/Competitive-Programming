#include <bits/stdc++.h>
using namespace std;

const long long maxn=3001;

long long n, k;
long long a[maxn];
long long dp[maxn][maxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        dp[i][i]=a[i];
    }
    for (int i = n; i >= 1; i--) {
        for (int j = i+1; j <= n; j++) {
            dp[i][j]=max(a[i]-dp[i+1][j], a[j]-dp[i][j-1]);
        }
    }
    cout << dp[1][n];
}