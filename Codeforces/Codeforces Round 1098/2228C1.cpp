#include <bits/stdc++.h>
using namespace std;

long long t, n, x, y, l;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> t;
    while (t--) {
        string s;
        cin >> s >> n;
        cin >> x >> y;
        long long a=stoll(s);
        vector<long long> re;
        l=s.size();
        if (l>1) {
            long long num=0;
            for (int i = 0; i < l-1; i++) {
                num=num*10+y;
            }
            re.push_back(num);
        }
        long long first=(x==0)?y:x;
        long long num=first;
        for (int i = 0; i < l; i++) {
            num=num*10+x;
        }
        re.push_back(num);
        string pref="";
        for (int i = 0; i < l; i++) {
            string t1=pref+to_string(x);
            string t2=pref+to_string(x);
            for (int j = i+1; j < l; j++) {
                t1+=to_string(x);
                t2+=to_string(y);
            }
            re.push_back(stoll(t1));
            re.push_back(stoll(t2));
            t1=pref+to_string(y);
            t2=pref+to_string(y);
            for (int j = i+1; j < l; j++) {
                t1+=to_string(x);
                t2+=to_string(y);
            }
            re.push_back(stoll(t1));
            re.push_back(stoll(t2));
            int cur=s[i]-'0';
            if (cur==x) pref+=to_string(x);
            else if (cur==y) pref+=to_string(y);
            else break;
        }
        if (pref==s) re.push_back(stoll(pref));
        long long mindiff=-1;
        for (auto b: re) {
            long long diff=abs(a-b);
            if (mindiff==-1||diff<mindiff) mindiff=diff;
        }
        cout << mindiff << "\n";
    }
}