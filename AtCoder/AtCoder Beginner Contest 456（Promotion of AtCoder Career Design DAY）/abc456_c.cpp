#include <bits/stdc++.h>
using namespace std;

const long long mod=998244353;

string s;
long long re;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> s;
    int l=0;
    re=0;
    for (int r = 0; r < s.size(); r++) {
        if (r>0&&s[r]==s[r-1]) l=r;
        re=(re+(r-l+1))%mod;
    }
    cout << re;
}
