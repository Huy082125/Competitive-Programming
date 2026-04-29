#include <bits/stdc++.h>
using namespace std;

const long long maxn=301;

long long n, t, x, y, z;
double dp[maxn][maxn][maxn];

double e(long long x, long long y, long long z) {
    if (x<0||y<0||z<0) return 0;
    if (x==0&&y==0&&z==0) return 0;
    if (dp[x][y][z]!=0) return dp[x][y][z];
    return dp[x][y][z]=(n+x*e(x-1, y, z)+y*e(x+1, y-1, z)+z*e(x, y+1, z-1))/(x+y+z);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> t;
        if (t==1) x++;
        if (t==2) y++;
        if (t==3) z++;
    }
    cout << setprecision(14) << fixed << e(x, y, z) << "\n";
}