#include <bits/stdc++.h>
using namespace std;

const long long maxn=2e5+1;

long long n, k, l, r, mid, re;
long long a[maxn];

bool check(long long m) {
    long long total=0;
    for (int i = 1; i <= n; i++) {
        if (a[i]<m) {
            total+=(m-a[i]+i-1)/i;
            if (total>k) return false;
        }
    }
    return total<=k;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> n >> k;
    l=LLONG_MAX;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        l=min(l, a[i]);
    }
    r=2e18;
    while (l<=r) {
        mid=(l+r)>>1;
        if (check(mid)) {
            re=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    cout << re;
    return 0;
}