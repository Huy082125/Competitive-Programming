#include <bits/stdc++.h>
using namespace std;

double x, y, s, t;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    freopen("angle2.in", "r", stdin);
    freopen("angle2.out", "w", stdout);
    cin >> x >> y >> s >> t;
    cout << setprecision(10) << fixed << acos((x*s+y*t)/(sqrt(x*x+y*y)*sqrt(s*s+t*t)));
}