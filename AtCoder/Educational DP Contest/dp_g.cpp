#include <bits/stdc++.h>
using namespace std;

const long long maxn=1e5+1;

long long n, m, u, v, re;
vector<long long> adj[maxn];
long long dp[maxn];

long long dfs(long long u) {
    if (dp[u]!=0) return dp[u];
    for (auto v: adj[u]) {
        dp[v]=dfs(v);
        dp[u]=max(dp[u], dp[v]+1);
    }
    return dp[u];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        cin >> u >> v;
        adj[u].push_back(v);
    }
    for (int i = 1; i <= n; i++) {
        dfs(i);
        re=max(re, dp[i]);
    }
    cout << re;
}