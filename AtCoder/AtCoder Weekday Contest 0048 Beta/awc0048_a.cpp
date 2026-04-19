#include <bits/stdc++.h>
using namespace std;

long long n, k;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> n;
    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s >> k;
        if (s=="Yes") {
            if (k%2!=0) s="No";
        }
        else {
            if (k%2!=0) s="Yes";
        }
        cout << s << "\n";
    }
}