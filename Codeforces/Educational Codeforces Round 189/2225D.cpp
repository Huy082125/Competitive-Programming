#include <bits/stdc++.h>
using namespace std;

const long long mod=998244353;

long long t, n, x;

long long get0(long long x) {
    return 1+(x>=3?(x-3)/4+1:0);
}

long long get1(long long x) {
    return x>=1?(x-1)/4+1:0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> t;
    while (t--) {
        cin >> n >> x;
        long long l0=get0(x-1)%mod;
        long long r0=(get0(n)-l0)%mod;
        long long l1=get1(x-1)%mod;
        long long r1=(get1(n)-l1)%mod;
        cout << ((l0*r0)%mod+(l1*r1)%mod)%mod << "\n";
    }
}