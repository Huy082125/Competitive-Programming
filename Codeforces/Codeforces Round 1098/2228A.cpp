#include <bits/stdc++.h>
using namespace std;

long long t, n, re, cnt0, cnt1, cnt2, x;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> t;
    while (t--) {
        cin >> n;
        cnt0=0;
        cnt1=0;
        cnt2=0;
        re=0;
        for (int i = 1; i <= n; i++) {
            cin >> x;
            if (x==0) cnt0++;
            if (x==1) cnt1++;
            if (x==2) cnt2++;
        }
        long long temp=min(cnt1, cnt2);
        re+=cnt0+temp;
        cnt1-=temp;
        cnt2-=temp;
        re+=cnt1/3+cnt2/3;
        cout << re << "\n";
    }
}