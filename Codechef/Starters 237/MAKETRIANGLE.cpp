#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a+b<=c) cout << c-(a+b)+1;
        else if (a+c<=b) cout << b-(a+c)+1;
        else if (b+c<=a) cout << a-(b+c)+1;
        else cout << 0;
        cout << "\n";
    }
}