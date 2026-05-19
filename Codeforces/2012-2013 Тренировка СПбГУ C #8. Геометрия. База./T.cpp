#include <bits/stdc++.h>
using namespace std;

const double e=1e-9;

struct Point {
    double x, y;
};

struct Ray {
    Point start, dir;
};

double CrossProduct(Point a, Point b) {
    return a.x*b.y-a.y*b.x;
}

double DotProduct(Point a, Point b) {
    return a.x*b.x+a.y*b.y;
}

Point sub(Point a, Point b) {
    return {a.x-b.x, a.y-b.y};
}

double GetLength(Point a, Point b) {
    return hypot(a.x-b.x, a.y-b.y);
}

double GetDistance(Point p, Ray r) {
    Point dp=sub(p, r.start);
    double t=DotProduct(dp, r.dir);
    if (t<0) return GetLength(p, r.start);
    return abs(CrossProduct(dp, r.dir))/hypot(r.dir.x, r.dir.y);
}

Point s1, m1, s2, m2;
Ray r1, r2;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    freopen("raydist.in", "r", stdin);
    freopen("raydist.out", "w", stdout);
    cin >> s1.x >> s1.y >> m1.x >> m1.y;
    cin >> s2.x >> s2.y >> m2.x >> m2.y;
    r1={s1, sub(m1, s1)};
    r2={s2, sub(m2, s2)};
    double c=CrossProduct(r1.dir, r2.dir);
    Point w=sub(s2, s1);
    if (abs(c)<e) {
        if (abs(CrossProduct(w, r1.dir))<e) {
            double t2=DotProduct(w, r1.dir);
            double t1=DotProduct(sub(s1, s2), r2.dir);
            if (t1>=-e||t2>=-e) cout << setprecision(10) << fixed << 0;
            else cout << setprecision(10) << fixed << GetLength(s1, s2);
        }
        else cout << setprecision(10) << fixed << min(GetDistance(s1, r2), GetDistance(s2, r1));
    }
    else {
        double t1=CrossProduct(w, r2.dir)/c;
        double t2=CrossProduct(w, r1.dir)/c;
        if (t1>=-e&&t2>=-e) cout << setprecision(10) << fixed << 0;
        else cout << setprecision(10) << fixed << min(GetDistance(s1, r2), GetDistance(s2, r1));
    }
}