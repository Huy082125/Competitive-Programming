#include <bits/stdc++.h>
using namespace std;

const long long mod=998244353;
const long long maxn=3e6+1;

long long x, y, z, re;
long long fact[maxn];
long long invf[maxn];

long long power(long long base, long long n) {
    long long re=1;
    base%=mod;
    while (n) {
        if (n&1) re=(re*base)%mod;
        base=(base*base)%mod;
        n>>=1;
    }
    return re;
}

long long inverse(long long n) {
    return power(n, mod-2);
}

void precompute() {
    fact[0]=1;
    for (int i = 1; i < maxn; i++) {
        fact[i]=(fact[i-1]*i)%mod;
    }
    invf[maxn-1]=inverse(fact[maxn-1]);
    for (int i = maxn-2; i >= 0; i--) {
        invf[i]=(invf[i+1]*(i+1))%mod;
    }
}

long long binom(long long n, long long r) {
    if (r<0||r>n) return 0;
    return (((fact[n]*invf[r])%mod)*invf[n-r])%mod;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    precompute();
    cin >> x >> y >> z;
    for (int k = 1; k <= x; k++) {
        re=(re+(((binom(x-1, k-1)*binom(y+1, k))%mod)*binom(y+z-k, y-k))%mod)%mod;
    }
    cout << re;
}