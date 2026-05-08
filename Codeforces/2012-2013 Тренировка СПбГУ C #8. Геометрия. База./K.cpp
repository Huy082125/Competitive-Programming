#include <bits/stdc++.h>
using namespace std;

double a_1, b_1, c_1, a_2, b_2, c_2;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    freopen("intersec1.in", "r", stdin);
    freopen("intersec1.out", "w", stdout);
    cin >> a_1 >> b_1 >> c_1 >> a_2 >> b_2 >> c_2;
    cout << setprecision(10) << fixed << (b_1*c_2-b_2*c_1)/(a_1*b_2-a_2*b_1) << " " << (a_2*c_1-a_1*c_2)/(a_1*b_2-a_2*b_1);
}