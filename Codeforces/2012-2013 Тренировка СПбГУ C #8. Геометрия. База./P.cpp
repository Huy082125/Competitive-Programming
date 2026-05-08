#include <bits/stdc++.h>
using namespace std;

double x, y, a, b, c;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    freopen("point1.in", "r", stdin);
    freopen("point1.out", "w", stdout);
    cin >> x >> y >> a >> b >> c;
    if (a*x+b*y+c==0) cout << "YES";
    else cout << "NO";
}