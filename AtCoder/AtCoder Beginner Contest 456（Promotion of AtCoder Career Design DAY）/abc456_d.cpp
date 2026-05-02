#include <bits/stdc++.h>
using namespace std;

const long long mod=998244353;

string s;
long long a, b, c;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i]=='a') a=(a+b+c+1)%mod;
        else if (s[i]=='b') b=(b+a+c+1)%mod;
        else c=(c+a+b+1)%mod;
    }
    cout << (a+b+c)%mod;
}
