#include <bits/stdc++.h>
using namespace std;

long long dx[4]={-1, 0, 1, 0};
long long dy[4]={0, -1, 0, 1};

long long h, w, cnt;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> h >> w;
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            cnt=0;
            for (int k = 0; k < 4; k++) {
                cnt+=(i+dx[k]>=1&&i+dx[k]<=h&&j+dy[k]>=1&&j+dy[k]<=w);
            }
            cout << cnt << " ";
        }
        cout << "\n";
    }
}