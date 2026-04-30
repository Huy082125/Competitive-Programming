#include <bits/stdc++.h>
using namespace std;

long long t, n, c;
vector<long long> g6;
vector<long long> g2;
vector<long long> g3;
vector<long long> g;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> t;
    while (t--) {
        cin >> n;
        g6.clear();
        g2.clear();
        g3.clear();
        g.clear();
        for (int i = 1; i <= n; i++) {
            cin >> c;
            if (c%6==0) g6.push_back(c);
            else if (c%2==0) g2.push_back(c);
            else if (c%3==0) g3.push_back(c);
            else g.push_back(c);
        }
        for (auto x: g2) {
            cout << x << " ";
        }
        for (auto x: g) {
            cout << x << " ";
        }
        for (auto x: g3) {
            cout << x << " ";
        }
        for (auto x: g6) {
            cout << x << " ";
        }
        cout << "\n";
    }
}