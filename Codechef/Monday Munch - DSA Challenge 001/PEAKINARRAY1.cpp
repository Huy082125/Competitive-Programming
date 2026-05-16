vector<int> findPeaks(vector<int>& A, int n) {
    // write your code here 
    vector<int> re;
    if (A[0]>A[1]) re.push_back(A[0]);
    for (int i = 1; i < n-1; i++) {
        if (A[i]>A[i-1]&&A[i]>A[i+1]) re.push_back(A[i]);
    }
    if (A[n-1]>A[n-2]) re.push_back(A[n-1]);
    if (re.empty()) re.push_back(-1);
    return re;
}