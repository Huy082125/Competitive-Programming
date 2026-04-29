#include <bits/stdc++.h>
using namespace std;

string s, t;
long long n, m;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> s >> t;
    n=s.size();
    m=t.size();
    s=" "+s;
    t=" "+t;
    vector<vector<long long>> dp(n+1, vector<long long>(m+1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s[i]==t[j]) {
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else {
                dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    int i=n;
    int j=m;
    string re="";
    while (i>=1&&j>=1) {
        if (s[i]==t[j]) {
            re=s[i]+re;
            i--;
            j--;
        }
        else if (dp[i-1][j]>dp[i][j-1]) {
            i--;
        }
        else {
            j--;
        }
    }
    cout << re;
}