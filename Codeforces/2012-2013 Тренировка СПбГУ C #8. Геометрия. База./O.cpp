#include <bits/stdc++.h>
using namespace std;

struct Line {
    double a, b, c;
    void ReadLine() {
        cin >> a >> b >> c;
    }
};

Line d;
double r;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    freopen("line3.in", "r", stdin);
    freopen("line3.out", "w", stdout);
    d.ReadLine();
    cin >> r;
    cout << setprecision(10) << fixed << d.a << " " << d.b << " " << d.c+r*sqrt(d.a*d.a+d.b*d.b) << "\n";
    cout << setprecision(10) << fixed << d.a << " " << d.b << " " << d.c-r*sqrt(d.a*d.a+d.b*d.b);
}