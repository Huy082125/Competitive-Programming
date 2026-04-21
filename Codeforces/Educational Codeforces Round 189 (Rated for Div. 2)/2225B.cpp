#include <bits/stdc++.h>
using namespace std;

long long t;

bool check(string &s, string &t) {
    int l=-1;
    int r=-1;
    int i=0;
    while (i<s.size()) {
        if (s[i]==t[i]) {
            i++;
            continue;
        }
        int j=i;
        while (j<s.size()&&s[j]!=t[j]) j++;
        if (l!=-1&&r!=-1) return false;
        l=i;
        r=j-1;
        i=j;
    }
    if (l==-1&&r==-1) return true;
    bool check1=true;
    for (int i = l; i <= r; i++) {
        if (s[r-(i-l)]!=t[i]) {
            check1=false;
            break;
        }
    }
    if (check1) return true;
    for (int i = l; i <= r; i++) {
        char temp=s[r-(i-l)]=='a'?'b':'a';
        if (temp!=t[i]) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string t1="";
        string t2="";
        for (int i = 0; i < s.size(); i++) {
            t1+=(i%2==0)?"a":"b";
            t2+=(i%2==0)?"b":"a";
        }
        if (check(s, t1)||check(s, t2)) cout << "YES";
        else cout << "NO";
        cout << "\n";
    }
}