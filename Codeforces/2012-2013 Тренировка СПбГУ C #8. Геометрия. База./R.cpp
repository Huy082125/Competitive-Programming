#include <bits/stdc++.h>
using namespace std;

const double e=1e-18;

struct Point {
    double x, y;
    void ReadPoint() {
        cin >> x >> y;
    }
};

struct Segment {
    Point start, end;
    double a, b, c;
    void ReadSegment() {
        start.ReadPoint();
        end.ReadPoint();
    }
    void GetSegmentEquation() {
        a=end.y-start.y;
        b=start.x-end.x;
        c=-(a*start.x+b*start.y);
    }
};

double CrossProduct(Point x, Point y, Point z) {
    Point p={y.x-x.x, y.y-x.y};
    Point q={z.x-x.x, z.y-x.y};
    return p.x*q.y-p.y*q.x;
}

bool InSegment(Point x, Segment d) {
    return min(d.start.x, d.end.x)<=x.x&&x.x<=max(d.start.x, d.end.x)&&min(d.start.y, d.end.y)<=x.y&&x.y<=max(d.start.y, d.end.y);
}

bool OnLine(Point x, Segment d) {
    return abs(d.a*x.x+d.b*x.y+d.c)<e;
}

Point p;
Segment d;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    freopen("point3.in", "r", stdin);
    freopen("point3.out", "w", stdout);
    p.ReadPoint();
    d.ReadSegment();
    d.GetSegmentEquation();
    if (OnLine(p, d)&&InSegment(p, d)) cout << "YES";
    else cout << "NO";
}