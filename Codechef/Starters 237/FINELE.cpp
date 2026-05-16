#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int re=0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if ((i&(n-i-1))==0) re^=x;
        }
        cout << re << "\n";
    }
}