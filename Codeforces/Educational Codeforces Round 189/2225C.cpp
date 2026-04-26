#include <bits/stdc++.h>
using namespace std;

const long long maxn=2e5+1;
const long long INF=1e9+7;

long long t, n;
vector<string> s_vec;
long long dp[maxn];

long long cost_vertical(vector<string> &s_vec, long long i) {
    return s_vec[0][i]!=s_vec[1][i];
}

long long cost_horizontal(vector<string> &s_vec, long long i) {
    return (s_vec[0][i]!=s_vec[0][i+1])+(s_vec[1][i]!=s_vec[1][i+1]);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> t;
    while (t--) {
        s_vec.clear();
        cin >> n;
        memset(dp, INF, sizeof(dp));
        string s;
        cin >> s;
        s_vec.push_back(s);
        cin >> s;
        s_vec.push_back(s);
        dp[0]=0;
        for (int i = 0; i < n; i++) {
            dp[i+1]=min(dp[i+1], dp[i]+cost_vertical(s_vec, i));
            if (i+1<n) dp[i+2]=min(dp[i+2], dp[i]+cost_horizontal(s_vec, i));
        }
        cout << dp[n] << "\n";
    }
}