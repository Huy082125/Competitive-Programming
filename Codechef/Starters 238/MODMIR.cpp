#include <bits/stdc++.h>
using namespace std;

long long t, n, m;

int main() {
	// your code goes here
    cin >> t;
    while (t--) {
        cin >> n >> m;
        if (n%3!=2) cout << -1;
        else {
            for (int i = 1; i <= n; i++) {
                if (i%6==1||i%6==2) cout << 1 << " ";
                else if (i%6==4|i%6==5) cout << m-1 << " ";
                else cout << 0 << " ";
            }
        }
        cout << "\n";
    }
}