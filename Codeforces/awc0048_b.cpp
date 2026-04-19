#include <bits/stdc++.h>
using namespace std;

const long long maxn=2e5+1;

long long n, i, re;
long long h[maxn];
long long d[maxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> h[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> d[i];
    }
    i=1;
    if (h[1]!=0&&d[1]!=0) re++;
    while (i+2<=n) {
        if (h[i+2]==0||d[i+2]==0) i+=2;
        else if (h[i+1]==0||d[i+1]==0) i++;
        else {
            re++;
            i+=2;
        }
    }
    if (i<n&&h[n]!=0&&d[n]!=0) re++;
    cout << re;
}