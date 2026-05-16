#include <bits/stdc++.h>
using namespace std;

string s;
long long n;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> s >> n;
    cout << s.substr(n, s.size()-2*n);
}