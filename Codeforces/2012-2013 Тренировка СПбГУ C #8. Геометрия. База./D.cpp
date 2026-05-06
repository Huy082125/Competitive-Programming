#include <bits/stdc++.h>
using namespace std;

double n, x, y, sum;
vector<pair<double, double>> coordinates;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    freopen("area1.in", "r", stdin);
    freopen("area1.out", "w", stdout);
    n=3;
    while (n--) {
        cin >> x >> y;
        coordinates.push_back({x, y});
    }
    coordinates.push_back({coordinates[0].first, coordinates[0].second});
    for (int i = 0; i < coordinates.size()-1; i++) {
        sum+=coordinates[i].first*coordinates[i+1].second-coordinates[i].second*coordinates[i+1].first;
    }
    sum+=coordinates[coordinates.size()-1].first*coordinates[0].second-coordinates[coordinates.size()-1].second*coordinates[0].first;
    cout << setprecision(10) << fixed << 0.5*abs(sum);
}