vector<vector<int>> findSubsets(vector<int>& inputNumbers) {
    // write your code here 
    vector<vector<int>> re{{}};
    for (auto num: inputNumbers) {
        int n=re.size();
        for (int i = 0; i < n; i++) {
            vector<int> temp=re[i];
            temp.push_back(num);
            re.push_back(temp);
        }
    }
    return re;
}