#include <bits/stdc++.h>
using namespace std;

long long t, n, maxval, curmex, maxsum, mexsum;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> t;
    while (t--) {
        cin >> n;
        vector<long long> a(n);
        set<long long> distinct;
        maxval=-1;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            distinct.insert(a[i]);
            maxval=max(maxval, a[i]);
        }
        distinct.erase(maxval);
        maxsum=n*maxval;
        curmex=(maxval==0)?1:0;
        mexsum=curmex;
        int i=1;
        while (i<n&&!distinct.empty()) {
            if (distinct.count(curmex)) {
                distinct.erase(curmex);
                i++;
                curmex++;
                if (curmex==maxval) curmex++;
                mexsum+=curmex;
            }
            else break;
        }
        if (i<n) mexsum+=(n-i)*curmex;
        cout << maxsum+mexsum << "\n";
    }
}