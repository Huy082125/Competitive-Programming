#include <bits/stdc++.h>
using namespace std;

const long long maxn=101;

long long n, k;
long long a[maxn];
long long dp[100001];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= k; i++) {
        for (int j = 1; j <= n; j++) {
            if (i-a[j]>=0&&!dp[i-a[j]]) {
                dp[i]=1;
            }
        }
    }
    if (dp[k]==1) cout << "First";
    else cout << "Second";
}