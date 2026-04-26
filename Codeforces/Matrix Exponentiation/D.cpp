#include <bits/stdc++.h>
using namespace std;

const long long mod=1e9+7;

long long n, m, k, u, v, re;

struct matrix {
    long long mat[101][101]={0};
    matrix friend operator * (matrix &a, matrix &b) {
        matrix c;
        for (int i = 0; i <= 100; i++) {
            for (int j = 0; j <= 100; j++) {
                c.mat[i][j]=0;
                for (int k = 0; k <= 100; k++) {
                    c.mat[i][j]=(c.mat[i][j]+a.mat[i][k]*b.mat[k][j])%mod;
                }
            }
        }
        return c;
    }
};

matrix adj;

matrix matpow(matrix base, long long n, long long k) {
    matrix re;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i==j) re.mat[i][j]=1;
            else re.mat[i][j]=0;
        }
    }
    while (k) {
        if (k&1) re=re*base;
        base=base*base;
        k>>=1;
    }
    return re;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            adj.mat[i][j]=0;
        }
    }
    for (int i = 1; i <= m; i++) {
        cin >> u >> v;
        adj.mat[u-1][v-1]=1;
    }
    matrix matre=matpow(adj, n, k);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            re=(re+matre.mat[i][j])%mod;
        }
    }
    cout << re;
}