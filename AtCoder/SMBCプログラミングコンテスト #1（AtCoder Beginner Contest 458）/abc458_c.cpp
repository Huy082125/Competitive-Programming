#include <bits/stdc++.h>
using namespace std;

string s;
vector<long long> pos;
long long re;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i]=='C') {
            re++;
            pos.push_back(i);
        }
    }
    for (auto x: pos) {
        re+=min(x, (long long)s.size()-x-1);
    }
    cout << re;
}