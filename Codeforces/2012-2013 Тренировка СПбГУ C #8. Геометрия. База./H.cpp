#include <bits/stdc++.h>
using namespace std;

#define pi acos(-1.0)

struct Point {
    double x, y;
    void ReadPoint() {
        cin >> x >> y;
    }
};

struct Ray {
    Point start, mark;
    double a, b, c;
    void ReadPoints() {
        start.ReadPoint();
        mark.ReadPoint();
    }
    void GetRayEquation() {
        a=mark.y-start.y;
        b=start.x-mark.x;
        c=-(a*start.x+b*start.y);
    }
};

Point GetVector(Point a, Point b) {
    Point re;
    re.x=b.x-a.x;
    re.y=b.y-a.y;
    return re;
}

double GetVectorLength(Point a) {
    return sqrt(a.x*a.x+a.y*a.y);
}

bool CheckAngle(Point a, Point b, Point c) {
    Point s=GetVector(b, a);
    Point t=GetVector(b, c);
    if (acos((s.x*t.x+s.y*t.y)/(GetVectorLength(s)*GetVectorLength(t)))>pi/2) return false;
    return true;
}

double GetDistance(Point p, Ray d) {
    return abs(d.a*p.x+d.b*p.y+d.c)/sqrt(d.a*d.a+d.b*d.b);
}

Point p;
Ray r;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    freopen("distance3.in", "r", stdin);
    freopen("distance3.out", "w", stdout);
    p.ReadPoint();
    r.ReadPoints();
    r.GetRayEquation();
    if (CheckAngle(p, r.start, r.mark)) cout << setprecision(10) << fixed << GetDistance(p, r);
    else cout << setprecision(10) << fixed << GetVectorLength(GetVector(p, r.start));
}