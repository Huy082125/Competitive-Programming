#include <bits/stdc++.h>
using namespace std;

double x, y, a, b, c;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    freopen("distance1.in", "r", stdin);
    freopen("distance1.out", "w", stdout);
    cin >> x >> y >> a >> b >> c;
    cout << setprecision(10) << fixed << abs(a*x+b*y+c)/sqrt(a*a+b*b);
}