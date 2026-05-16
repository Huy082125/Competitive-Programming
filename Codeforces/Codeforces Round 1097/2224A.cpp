#include <bits/stdc++.h>
using namespace std;

long long t, n, re;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> t;
    while (t--) {
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<long long> cur(n);
        cur[n-1]=a[n-1];
        re=0;
        for (int i = n-2; i >= 0; i--) {
            if (cur[i+1]>0) {
                cur[i]=a[i]+cur[i+1];
            }
            else {
                cur[i]=a[i];
            }
        }
        for (int i = 0; i < n; i++) {
            re+=(cur[i]>0);
        }
        cout << re << "\n";
    }
}