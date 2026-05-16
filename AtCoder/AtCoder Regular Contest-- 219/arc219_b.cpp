#include <bits/stdc++.h>
using namespace std;

const long long maxn=5e5+1;
const long long mod=998244353;

long long t, n, firstdiff;
long long p[maxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> t;
    while (t--) {
        cin >> n;
        firstdiff=-1;
        for (int i = 1; i <= n; i++) {
            cin >> p[i];
            if (firstdiff==-1&&p[i]!=i) firstdiff=i;
        }
        if (firstdiff==-1) cout << (n*(n-1)/2+1)%mod;
        else if (firstdiff==1) cout << 0;
        else cout << ((firstdiff-1)*(2*n-firstdiff)/2)%mod;
        cout << "\n";
    }
}