#include <bits/stdc++.h>
using namespace std;

double x_1, y_1, x_2, y_2, a, b, c;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    freopen("position.in", "r", stdin);
    freopen("position.out", "w", stdout);
    cin >> x_1 >> y_1 >> x_2 >> y_2 >> a >> b >> c;
    if ((a*x_1+b*y_1+c)*(a*x_2+b*y_2+c)/(a*a+b*b)>0) cout << "YES";
    else cout << "NO";
}