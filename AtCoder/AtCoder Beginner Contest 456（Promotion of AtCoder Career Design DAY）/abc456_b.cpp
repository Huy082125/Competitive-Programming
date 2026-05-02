#include <bits/stdc++.h>
using namespace std;

long long x;
long long cnt[4][7];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 6; j++) {
            cin >> x;
            if (x==4||x==5||x==6) cnt[i][x]++;
        }
    }
    cout << setprecision(10) << fixed << (double)(cnt[1][4]*cnt[2][5]*cnt[3][6]+cnt[1][4]*cnt[2][6]*cnt[3][5]+cnt[1][5]*cnt[2][4]*cnt[3][6]+cnt[1][5]*cnt[2][6]*cnt[3][4]+cnt[1][6]*cnt[2][4]*cnt[3][5]+cnt[1][6]*cnt[2][5]*cnt[3][4])/216;
}
