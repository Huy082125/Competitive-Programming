#include <bits/stdc++.h>
using namespace std;

double x_1, y_1, x_2, y_2;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    freopen("length.in", "r", stdin);
    freopen("length.out", "w", stdout);
    cin >> x_1 >> y_1 >> x_2 >> y_2;
    cout << setprecision(10) << fixed << sqrt((x_2-x_1)*(x_2-x_1)+(y_2-y_1)*(y_2-y_1));
}