#include <bits/stdc++.h>
using namespace std;

const long long mod=1e9+7;

long long n, m, q, u, v, s, t, k;
vector<vector<long long>> a[32];

vector<vector<long long>> mul(vector<vector<long long>> &a, vector<vector<long long>> &b) {
    vector<vector<long long>> re(a.size(), vector<long long>(b[0].size()));
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b[0].size(); j++) {
            for (int k = 0; k < a[0].size(); k++) {
                re[i][j]=(re[i][j]+a[i][k]*b[k][j])%mod;
            }
        }
    }
    return re;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> n >> m >> q;
    a[0].resize(n, vector<long long>(n));
    while (m--) {
        cin >> u >> v;
        a[0][u-1][v-1]=1;
    }
    for (int i = 1; i < 32; i++) {
        a[i]=mul(a[i-1], a[i-1]);
    }
    while (q--) {
        cin >> s >> t >> k;
        vector<vector<long long>> temp(1, vector<long long>(n));
        temp[0][s-1]=1;
        for (int i = 0; i < 32; i++) {
            if (k&(1<<i)) temp=mul(temp, a[i]);
        }
        cout << temp[0][t-1] << "\n";
    }
}