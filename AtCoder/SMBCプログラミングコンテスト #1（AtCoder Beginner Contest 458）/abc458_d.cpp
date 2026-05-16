#include <bits/stdc++.h>
using namespace std;

long long x, q, a, b, cur, cntmax, cntmin;
priority_queue<long long> maxheap;
priority_queue<long long, vector<long long>, greater<long long>> minheap;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> x >> q;
    cur=x;
    while (q--) {
        cin >> a >> b;
        cntmax=0;
        cntmin=0;
        if (a<=cur) {
            maxheap.push(a);
            cntmax++;
        }
        else {
            minheap.push(a);
            cntmin++;
        }
        if (b<=cur) {
            maxheap.push(b);
            cntmax++;
        }
        else {
            minheap.push(b);
            cntmin++;
        }
        if (cntmax==2) {
            minheap.push(cur);
            cur=maxheap.top();
            maxheap.pop();
        }
        else if (cntmin==2) {
            maxheap.push(cur);
            cur=minheap.top();
            minheap.pop();
        }
        cout << cur << "\n";
    }
}