#include <bits/stdc++.h>
using namespace std;

double x, y, a, b, c;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    freopen("line2.in", "r", stdin);
    freopen("line2.out", "w", stdout);
    cin >> x >> y >> a >> b;
    c=-a;
    a=b;
    b=c;
    cout << setprecision(10) << fixed << b << " " << -a << " " << a*y-b*x;
}