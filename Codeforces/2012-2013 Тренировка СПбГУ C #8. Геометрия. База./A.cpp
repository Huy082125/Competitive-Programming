#include <bits/stdc++.h>
using namespace std;
 
const double pi=acos(-1);
 
double x, y, re;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    freopen("angle1.in", "r", stdin);
    freopen("angle1.out", "w", stdout);
    cin >> x >> y;
    re=atan2(y, x);
    if (re<0) re+=2*pi;
    if (re>=2*pi) re-=2*pi;
    cout << setprecision(10) << fixed << re;
}