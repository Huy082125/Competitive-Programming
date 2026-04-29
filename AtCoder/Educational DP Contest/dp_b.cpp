#include <bits/stdc++.h>
using namespace std;

const long long maxn=1e5+1;

long long n, k;
long long a[maxn];
long long dp[maxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        dp[i]=LLONG_MAX;
    }
    dp[1]=0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            if (i+j>n) break;
            dp[i+j]=min(dp[i+j], dp[i]+abs(a[i]-a[i+j]));
        }
    }
    cout << dp[n];
}