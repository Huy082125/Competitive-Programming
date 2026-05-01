#include <bits/stdc++.h>
using namespace std;

const long long mod=1e9+7;
const long long maxn=2e5+1;

long long n, q, u;
char s[maxn];
char v;

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
    void add(char ch) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                mat[i][j]=0;
            }
        }
        for (char c = 'A'; c <= 'Z'; c++) {
            if (ch=='?'||ch==c) {
                if (c=='S'||c=='D') {
                    mat[0][0]++;
                    mat[1][0]++;
                }
                else if (c=='H') {
                    mat[0][1]++;
                    mat[1][1]++;
                }
                else if (c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
                    mat[0][1]++;
                    mat[1][0]++;
                }
                else {
                    mat[0][0]++;
                    mat[1][1]++;
                }
            }
        }
    }
};

matrix st[maxn*4];

void build(long long id, long long l, long long r) {
    if (l==r) {
        st[id].add(s[l]);
        return;
    }
    long long mid=(l+r)>>1;
    build(id*2, l, mid);
    build(id*2+1, mid+1, r);
    st[id]=st[id*2]*st[id*2+1];
}

void update(long long id, long long l, long long r, long long u, char v) {
    if (u<l||r<u) return;
    if (l==r) {
        st[id].add(v);
        return;
    }
    long long mid=(l+r)>>1;
    update(id*2, l, mid, u, v);
    update(id*2+1, mid+1, r, u, v);
    st[id]=st[id*2]*st[id*2+1];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
    }
    build(1, 1, n);
    cout << st[1].mat[1][1] << "\n";
    while (q--) {
        cin >> u >> v;
        update(1, 1, n, u, v);
        cout << st[1].mat[1][1] << "\n";
    }
}