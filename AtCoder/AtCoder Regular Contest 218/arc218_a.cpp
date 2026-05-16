#include <bits/stdc++.h>
using namespace std;

const long long mod=998244353;

long long n, m, x;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> n >> m;
    vector<unordered_map<long long, long long>> cnt(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> x;
            cnt[i][x]++;
        }
    }
    unordered_map<long long, vector<pair<long long, long long>>> pos;
    for (int i = 0; i < n; i++) {
        for (auto t: cnt[i]) {
            long long num=t.first;
            long long freq=t.second;
            pos[num].push_back({i, freq});
        }
    }
    vector<long long> power(n+1);
    power[0]=1;
    for (int i = 1; i <= n; i++) {
        power[i]=(power[i-1]*m)%mod;
    }
    long long total=power[n];
    long long re=0;
    for (auto p: pos) {
        auto v=p.second;
        long long k=v.size();
        long long prod=power[n-k];
        for (auto i: v) {
            long long c=i.second;
            prod=(prod*(m-c))%mod;
        }
        long long temp=(total-prod+mod)%mod;
        re=(re+temp)%mod;
    }
    cout << re;
}