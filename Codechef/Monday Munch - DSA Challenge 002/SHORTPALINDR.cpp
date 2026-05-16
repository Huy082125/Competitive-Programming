string shortestPalindrome(const string& s) {
    //write your code here...
    if (s.size()<=1) return s;
    string rev=s;
    reverse(rev.begin(), rev.end());
    string total=s+"#"+rev;
    int n=total.size();
    vector<int> pref(n, 0);
    for (int i = 1; i < n; i++) {
        int j=pref[i-1];
        while (j>0&&total[i]!=total[j]) {
            j=pref[j-1];
        }
        if (total[i]==total[j]) j++;
        pref[i]=j;
    }
    return rev.substr(0, s.size()-pref.back())+s;
}