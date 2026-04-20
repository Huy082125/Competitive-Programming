#include <bits/stdc++.h>
using namespace std;

const long long mod=1e9+7;
const long long maxn=14;

long long n, k, p, q, r;
long long a[maxn];
long long c[maxn];

struct matrix {
    long long mat[maxn][maxn];
    matrix() {
        memset(mat, 0, sizeof(mat));
    }
    matrix friend operator * (matrix &a, matrix &b) {
        matrix c;
        for (int i = 0; i < 14; i++) {
            for (int j = 0; j < 14; j++) {
                for (int k = 0; k < 14; k++) {
                    c.mat[i][j]=(c.mat[i][j]+a.mat[i][k]*b.mat[k][j])%mod;
                }
            }
        }
        return c;
    }
};

matrix matpow(matrix base, long long k) {
    matrix re;
    for (int i = 0; i < maxn; i++) {
        re.mat[i][i]=1;
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
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    cin >> p >> q >> r;
    if (k<n) {
        cout << a[k]%mod;
        return 0;
    }
    matrix base;
    for (int i = 0; i < n+3; i++) {
        for (int j = 0; j < n+3; j++) {
            base.mat[i][j]=0;
        }
    }
    for (int i = 0; i < n; i++) {
        base.mat[0][i]=c[i];
    }
    base.mat[0][n]=p;
    base.mat[0][n+1]=q;
    base.mat[0][n+2]=r;
    for (int i = 1; i < n; i++) {
        base.mat[i][i-1]=1;
    }
    base.mat[n][n]=1;
    base.mat[n+1][n]=1;
    base.mat[n+1][n+1]=1;
    base.mat[n+2][n]=1;
    base.mat[n+2][n+1]=2;
    base.mat[n+2][n+2]=1;
    matrix matre1=matpow(base, k-(n-1));
    matrix base2;
    for (int i = n-1; i >= 0; i--) {
        base2.mat[i][0]=a[n-i-1];
    }
    base2.mat[n][0]=1;
    base2.mat[n+1][0]=n;
    base2.mat[n+2][0]=(n*n)%mod;
    matrix matre=matre1*base2;
    cout << matre.mat[0][0];
}