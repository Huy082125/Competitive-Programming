#include <bits/stdc++.h>
using namespace std;

const unsigned long long mod=4294967296;

unsigned long long n;

struct matrix {
    unsigned long long mat[65][65]={0};
    matrix friend operator * (matrix &a, matrix &b) {
        matrix c;
        for (int i = 0; i <= 64; i++) {
            for (int j = 0; j <= 64; j++) {
                c.mat[i][j]=0;
                for (int k = 0; k <= 64; k++) {
                    c.mat[i][j]=(c.mat[i][j]+a.mat[i][k]*b.mat[k][j])%mod;
                }
            }
        }
        return c;
    }
};

matrix re;

matrix matpow(matrix base, unsigned long long n, unsigned long long k) {
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
    cin >> n;
    re.mat[64][64]=1;
    for (int i = 0; i < 64; i++) {
        re.mat[i][64]=1;
        for (int j = 0; j < 64; j++) {
            int row=i/8;
            int col=i%8;
            int row2=j/8;
            int col2=j%8;
            int drow=abs(row-row2);
            int dcol=abs(col-col2);
            if ((drow==2&&dcol==1)||(drow==1&&dcol==2)) {
                re.mat[i][j]=1;
            }
        }
    }
    cout << matpow(re, 65, n+1).mat[0][64];
}