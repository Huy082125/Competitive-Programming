#include <bits/stdc++.h>
using namespace std;

long long t, a, b;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if ((a&1)&&(b&1)) cout << "NO";
        else cout << "YES";
        cout << "\n";
    }
}