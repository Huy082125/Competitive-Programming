#include <bits/stdc++.h>
using namespace std;

const long long mod=1e9+7;

long long n;

struct matrix {
    long long mat[2][2];
    matrix friend operator * (matrix &a, matrix &b) {
        matrix c;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                c.mat[i][j]=0;
                for (int k = 0; k < 2; k++) {
                    c.mat[i][j]=(c.mat[i][j]+a.mat[i][k]*b.mat[k][j])%mod;
                }
            }
        }
        return c;
    }
};

matrix matpow(matrix base, long long n) {
    matrix re={{{1, 0}, {0, 1}}};
    while (n) {
        if (n&1) re=re*base;
        base=base*base;
        n>>=1;
    }
    return re;
}



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> n;
    matrix base={{{1, 1}, {1, 0}}};
    cout << matpow(base, n).mat[1][0];
}