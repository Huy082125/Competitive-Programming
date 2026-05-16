#include <bits/stdc++.h>
using namespace std;

long long n, l, x, y;
vector<vector<long long>> v;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> n;
    v.push_back({0});
    for (int i = 1; i <= n; i++) {
        cin >> l;
        vector<long long> a(l+1);
        for (int j = 1; j <= l; j++) {
            cin >> a[j];
        }
        v.push_back(a);
    }
    cin >> x >> y;
    cout << v[x][y];
}