#include <bits/stdc++.h>
using namespace std;

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

double DotProduct(Point x, Point y, Point z) {
    Point p={y.x-x.x, y.y-x.y};
    Point q={z.x-x.x, z.y-x.y};
    return p.x*q.x+p.y*q.y;
}

double CrossProduct(Point x, Point y, Point z) {
    Point p={y.x-x.x, y.y-x.y};
    Point q={z.x-x.x, z.y-x.y};
    return p.x*q.y-p.y*q.x;
}

bool InSegment(Point x, Segment d) {
    return min(d.start.x, d.end.x)<=x.x&&x.x<=max(d.start.x, d.end.x)&&min(d.start.y, d.end.y)<=x.y&&x.y<=max(d.start.y, d.end.y);
}

Point Intersect(Segment d1, Segment d2) {
    return {(d1.b*d2.c-d2.b*d1.c)/(d1.a*d2.b-d2.a*d1.b), (d1.c*d2.a-d2.c*d1.a)/(d1.a*d2.b-d2.a*d1.b)};
}

bool SegmentIntersection(Segment d1, Segment d2) {
    Point p=Intersect(d1, d2);
    return InSegment(p, d1)&&InSegment(p, d2);
}

double GetLength(Point x, Point y) {
    return sqrt((y.x-x.x)*(y.x-x.x)+(y.y-x.y)*(y.y-x.y));
}

double GetDistance(Point p, Segment d) {
    if (DotProduct(d.start, d.end, p)<0) return GetLength(d.start, p);
    if (DotProduct(d.end, d.start, p)<0) return GetLength(d.end, p);
    return abs(CrossProduct(d.start, d.end, p))/GetLength(d.start, d.end);
}

Segment d1, d2;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    // freopen("distance5.in", "r", stdin);
    // freopen("distance5.out", "w", stdout);
    d1.ReadSegment();
    d2.ReadSegment();
    d1.GetSegmentEquation();
    d2.GetSegmentEquation();
    if (d1.a==d2.a&&d1.b==d2.b&&d1.c==d2.c) {
        if (InSegment(d1.start, d2)||InSegment(d1.end, d2)||InSegment(d2.start, d1)||InSegment(d2.end, d1)) cout << setprecision(10) << fixed << 0;
        else cout << setprecision(10) << fixed << min({GetLength(d1.start, d2.start), GetLength(d1.start, d2.end), GetLength(d1.end, d2.start), GetLength(d1.end, d2.end)});
    }
    else if (SegmentIntersection(d1, d2)) cout << setprecision(10) << fixed << 0;
    else cout << setprecision(10) << fixed << min({GetDistance(d1.start, d2), GetDistance(d1.end, d2), GetDistance(d2.start, d1), GetDistance(d2.end, d1)});
}