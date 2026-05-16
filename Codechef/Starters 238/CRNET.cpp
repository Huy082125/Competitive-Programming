#include <bits/stdc++.h>
using namespace std;

long long t, n;

int main() {
	// your code goes here
    cin >> t;
    while (t--) {
        cin >> n;
        if (n<=20) cout << n*10;
        else cout << 200+(n-20)*5/2;
        cout << "\n";
    }
}