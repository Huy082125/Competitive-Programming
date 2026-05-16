#include <bits/stdc++.h>
using namespace std;

long long t, n, x, k, c, re, cnt;

int main() {
	// your code goes here
    cin >> t;
    while (t--) {
        cin >> n >> x >> k;
        map<long long, long long, greater<long long>> mp;
        for (int i = 1; i <= n; i++) {
            cin >> c;
            mp[c]++;
        }
        re=0;
        cnt=0;
        for (auto [i, j]: mp) {
            if (cnt<k) {
                re+=j;
                cnt++;
            }
            else break;
        }
        cout << min(x, re) << "\n";
    }
}