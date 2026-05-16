#include <bits/stdc++.h>
using namespace std;

long long x, y, z;

int main() {
	// your code goes here
    cin >> x >> y >> z;
    cout << max(0LL, x+z-y+1);
}