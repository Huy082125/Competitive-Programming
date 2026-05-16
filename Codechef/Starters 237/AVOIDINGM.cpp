#include <bits/stdc++.h>
using namespace std;

const long long mod=998244353;
const long long maxn=3005;

long long c[maxn][maxn];

void combination() {
    for (int i = 0; i < maxn; i++) {
        c[i][0]=1;
        for (int j = 1; j <= i; j++) {
            c[i][j]=(c[i-1][j-1]+c[i-1][j])%mod;
        }
    }
}

long long t, m, n;

int main() {
	// your code goes here
	combination();
    cin >> t;
    while (t--) {
        cin >> n >> m;
        vector<long long> f(n+1, 0);
        for (int j = 1; j <= m; j++) {
            long long coeff=c[m][j];
            if (j%2==0) coeff=(mod-coeff)%mod;
            long long val=n-j;
            long long p=1;
            for (int i = 0; i <= n; i++) {
                f[i]=(f[i]+coeff*p)%mod;
                p=(p*val)%mod;
            }
        }
        f[0]=1;
        vector<long long> dp(n+1, 0);
        dp[0]=1;
        for (int i = 1; i <= n; i++) {
            dp[i]=f[i];
            for (int j = 1; j <= i; j++) {
                dp[i]=(dp[i]+(f[j-1]*dp[i-j])%mod)%mod;
            }
        }
        cout << dp[n] << "\n";
    }
}