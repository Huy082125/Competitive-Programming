#include <bits/stdc++.h>
using namespace std;

#define pi acos(-1.0)

struct Point {
    double x, y;
    void ReadPoint() {
        cin >> x >> y;
    }
};

struct Segment {
    Point start, end;
    double a, b, c;
    void ReadPoints() {
        start.ReadPoint();
        end.ReadPoint();
    }
    void GetRayEquation() {
        a=end.y-start.y;
        b=start.x-end.x;
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

double GetDistance(Point p, Segment d) {
    return abs(d.a*p.x+d.b*p.y+d.c)/sqrt(d.a*d.a+d.b*d.b);
}

Point p;
Segment s;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    freopen("distance4.in", "r", stdin);
    freopen("distance4.out", "w", stdout);
    p.ReadPoint();
    s.ReadPoints();
    s.GetRayEquation();
    if (!CheckAngle(p, s.start, s.end)) cout << setprecision(10) << fixed << GetVectorLength(GetVector(p, s.start));
    else if (!CheckAngle(p, s.end, s.start)) cout << setprecision(10) << fixed << GetVectorLength(GetVector(p, s.end));
    else cout << setprecision(10) << fixed << GetDistance(p, s);
}