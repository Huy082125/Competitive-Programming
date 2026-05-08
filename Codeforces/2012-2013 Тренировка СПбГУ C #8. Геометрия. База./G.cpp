#include <bits/stdc++.h>
using namespace std;

double x, y, x_1, y_1, x_2, y_2, a, b;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    freopen("distance2.in", "r", stdin);
    freopen("distance2.out", "w", stdout);
    cin >> x >> y >> x_1 >> y_1 >> x_2 >> y_2;
    a=(y_2-y_1)/(x_2-x_1);
    b=y_1-a*x_1;
    cout << setprecision(10) << fixed << abs(a*x-y+b)/sqrt(a*a+1);
}