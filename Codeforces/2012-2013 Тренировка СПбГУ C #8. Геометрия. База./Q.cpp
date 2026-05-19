#include <bits/stdc++.h>
using namespace std;

const double e=1e-18;

struct Point {
    double x, y;
    void ReadPoint() {
        cin >> x >> y;
    }
};

struct Ray {
    Point start, mark;
    double a, b, c;
    void ReadRay() {
        start.ReadPoint();
        mark.ReadPoint();
    }
    void GetRayEquation() {
        a=mark.y-start.y;
        b=start.x-mark.x;
        c=-(a*start.x+b*start.y);
    }
};

bool Direction(Point p, Ray r) {
    double DotProduct=(r.mark.x-r.start.x)*(p.x-r.start.x)+(r.mark.y-r.start.y)*(p.y-r.start.y);
    return DotProduct>=-e;
}

bool OnLine(Point x, Ray d) {
    return abs(d.a*x.x+d.b*x.y+d.c)<e;
}

Point p;
Ray r;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    freopen("point2.in", "r", stdin);
    freopen("point2.out", "w", stdout);
    p.ReadPoint();
    r.ReadRay();
    r.GetRayEquation();
    if (OnLine(p, r)&&Direction(p, r)) cout << "YES";
    else cout << "NO";
}