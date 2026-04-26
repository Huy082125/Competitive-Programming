#include <bits/stdc++.h>
using namespace std;

long long h, w, re;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> h >> w;
    vector<string> vs;
    vs.push_back("");
    for (int i = 1; i <= h; i++) {
        string s;
        cin >> s;
        s=" "+s;
        vs.push_back(s);
    }
    for (int h1 = 1; h1 <= h; h1++) {
        for (int h2 = h1; h2 <= h; h2++) {
            for (int w1 = 1; w1 <= w; w1++) {
                for (int w2 = w1; w2 <= w; w2++) {
                    bool check=true;
                    for (int i = h1; i <= h2; i++) {
                        for (int j = w1; j <= w2; j++) {
                            if (vs[i][j]!=vs[h1+h2-i][w1+w2-j]) {
                                check=false;
                                break;
                            }
                        }
                        if (!check) break;
                    }
                    re+=check;
                }
            }
        }
    }
    cout << re;
}