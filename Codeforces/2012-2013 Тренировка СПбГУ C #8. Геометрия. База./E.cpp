#include <bits/stdc++.h>
using namespace std;

double x_1, y_1, x_2, y_2, x_3, y_3, v_1_x, v_1_y, v_2_x, v_2_y, d_x, d_y;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    freopen("bisector.in", "r", stdin);
    freopen("bisector.out", "w", stdout);
    cin >> x_1 >> y_1 >> x_2 >> y_2 >> x_3 >> y_3;
    v_1_x=x_2-x_1;
    v_1_y=y_2-y_1;
    v_2_x=x_3-x_1;
    v_2_y=y_3-y_1;
    d_x=v_1_x/sqrt(v_1_x*v_1_x+v_1_y*v_1_y)+v_2_x/sqrt(v_2_x*v_2_x+v_2_y*v_2_y);
    d_y=v_1_y/sqrt(v_1_x*v_1_x+v_1_y*v_1_y)+v_2_y/sqrt(v_2_x*v_2_x+v_2_y*v_2_y);
    cout << setprecision(10) << fixed << d_y << " " << -d_x << " " << d_x*y_1-d_y*x_1;
}