#include <bits/stdc++.h>
using namespace std;

long long n, m;
unordered_set<string> c;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        string t=s;
        for (int j = 0; j < m; j++) {
            t[j]=s[j]=='0'?'1':'0';
        }
        c.insert(t);
    }
    string t(m, '0');
    bool check=false;
    for (int i = 0; i <= n; i++) {
        if (c.find(t)==c.end()) {
            check=true;
            break;
        }
        int j=m-1;
        while (j>=0&&t[j]=='1') {
            t[j]='0';
            j--;
        }
        if (j<0) break;
        t[j]='1';
    }
    if (check) cout << "Yes\n" << t;
    else cout << "No";
}