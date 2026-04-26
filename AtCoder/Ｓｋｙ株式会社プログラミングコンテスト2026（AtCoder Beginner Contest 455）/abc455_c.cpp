#include <bits/stdc++.h>
using namespace std;

unsigned long long n, k, x, re;
unordered_map<unsigned long long, unsigned long long> mp;
set<unsigned long long> s;
vector<pair<unsigned long long, unsigned long long>> temp;

bool cmp(const pair<unsigned long long, unsigned long long> &a, const pair<unsigned long long, unsigned long long> &b) {
    if (a.second==b.second) return a.first>b.first;
    return a.second>b.second;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        mp[x]++;
        s.insert(x);
    }
    for (auto i: s) {
        temp.push_back({i, i*mp[i]});
    }
    sort(temp.begin(), temp.end(), cmp);
    for (int i = 0; i < min((unsigned long long)temp.size(), k); i++) {
        mp[temp[i].first]=0;
    }
    for (auto i: mp) {
        re+=i.first*i.second;
    }
    cout << re;
}