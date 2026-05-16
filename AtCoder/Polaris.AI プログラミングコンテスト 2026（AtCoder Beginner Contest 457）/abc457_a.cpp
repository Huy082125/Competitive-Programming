#include <bits/stdc++.h>
using namespace std;

const long long maxn=101;

long long n, x;
long long a[maxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    cin >> x;
    cout << a[x];
}