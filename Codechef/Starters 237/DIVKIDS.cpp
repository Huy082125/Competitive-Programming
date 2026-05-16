#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int re=0;
        while (n--) {
            int x;
            cin >> x;
            if (x%k==0) re=max(re, x);
        }
        cout << re << "\n";
    }
}