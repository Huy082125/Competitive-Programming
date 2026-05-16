#include <bits/stdc++.h>
using namespace std;

long long t, n, pos, neg, x;

int main() {
	// your code goes here
    cin >> t;
    while (t--) {
        cin >> n;
        pos=0;
        neg=0;
        for (int i = 1; i <= n; i++) {
            cin >> x;
            if (x==1) pos++;
            if (x==-1) neg++;
        }
        if (pos>0&&neg>0) {
            if (pos>=2&&neg>=2) cout << "-1 0 1";
            else if (pos>=2&&neg==1) cout << "-1 0";
            else if (pos==1&&neg>=2) cout << "0 1";
            else cout << "0";
        }
        else if (pos>0) cout << "-1";
        else if (neg>0) cout << "1";
        else cout << "0";
        cout << "\n";
    }
}