vector<long long> findSuperstarDishes(vector<long long> &a, long long n) {
    // write your code here 
    unordered_map<long long, long long> mp;
    for (auto x: a) {
        mp[x]++;
    }
    vector<long long> re;
    for (auto i: mp) {
        if (i.second>n/3) re.push_back(i.first);
    }
    sort(re.begin(), re.end());
    return re;
}