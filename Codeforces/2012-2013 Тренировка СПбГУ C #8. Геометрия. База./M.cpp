#include <bits/stdc++.h>
using namespace std;

double x_1, y_1, x_2, y_2, m, cy, b;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    freopen("line1.in", "r", stdin);
    freopen("line1.out", "w", stdout);
    cin >> x_1 >> y_1 >> x_2 >> y_2;
    m=x_2-x_1!=0?(y_2-y_1)/(x_2-x_1):1;
    b=x_2-x_1!=0?y_1-m*x_1:-x_1;
    cy=x_2-x_1!=0?-1:0;
    cout << setprecision(10) << fixed << m << " " << cy << " " << b;
}