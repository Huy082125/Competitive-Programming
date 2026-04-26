#include <bits/stdc++.h>
using namespace std;

const long long INF=3e18+5;

long long n, m, k, u, v, c, re;

struct matrix {
    long long mat[101][101];
    matrix friend operator * (matrix &a, matrix &b) {
        matrix c;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                c.mat[i][j]=INF;
                for (int k = 0; k < n; k++) {
                    if (a.mat[i][k]<INF&&b.mat[k][j]<INF) c.mat[i][j]=min(c.mat[i][j], a.mat[i][k]+b.mat[k][j]);
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
            if (i==j) re.mat[i][j]=0;
            else re.mat[i][j]=INF;
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
            adj.mat[i][j]=INF;
        }
    }
    for (int i = 1; i <= m; i++) {
        cin >> u >> v >> c;
        adj.mat[u-1][v-1]=c;
    }
    matrix matre=matpow(adj, n, k);
    re=INF;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            re=min(re, matre.mat[i][j]);
        }
    }
    if (re>INF/2) cout << "IMPOSSIBLE";
    else cout << re;
}