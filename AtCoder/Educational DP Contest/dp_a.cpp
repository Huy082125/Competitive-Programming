#include <bits/stdc++.h>
using namespace std;

const long long maxn=1e5+1;

long long n;
long long a[maxn];
long long dp[maxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    dp[1]=0;
    dp[2]=abs(a[1]-a[2]);
    for (int i = 3; i <= n; i++) {
        dp[i]=min(dp[i-2]+abs(a[i]-a[i-2]), dp[i-1]+abs(a[i]-a[i-1]));
    }
    cout << dp[n];
}