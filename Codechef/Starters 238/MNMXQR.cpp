#include <bits/stdc++.h>
using namespace std;

long long t, n, q, type, u, x, temp;

int main() {
	// your code goes here
    cin >> t;
    while (t--) {
        cin >> n >> q;
        long long a[n+1];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        while (q--) {
            cin >> type >> u >> x;
            if (type==1) a[u]=x;
            else {
                temp=x-u+1;
                if (temp==1) cout << a[u];
                else if (temp%2==0) cout << max(a[u+temp/2-1], a[u+temp/2]);
                else cout << min(a[u+(temp+1)/2-1], max(a[u+(temp+1)/2-2], a[u+(temp+1)/2]));
                cout << "\n";
            }
        }
    }
}