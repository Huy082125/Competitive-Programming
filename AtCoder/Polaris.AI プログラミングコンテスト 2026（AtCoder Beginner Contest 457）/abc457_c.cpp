#include <bits/stdc++.h>
using namespace std;

const long long maxn=2e5+1;

long long n, k, c, total;
long long l[maxn];
vector<vector<long long>> v;
vector<long long> re;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> n >> k;
    v.push_back({0});
    for (int i = 1; i <= n; i++) {
        cin >> l[i];
        vector<long long> a(l[i]+1);
        for (int j = 1; j <= l[i]; j++) {
            cin >> a[j];
        }
        v.push_back(a);
    }
    for (int i = 1; i <= n; i++) {
        cin >> c;
        total+=c*l[i];
        if (total>=k) {
            long long temp=(k-(total-c*l[i]))%l[i];
            if (temp==0) temp=l[i];
            cout << v[i][temp];
            return 0;
        }
    }
    return 0;
}