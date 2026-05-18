int findMedian(vector<vector<int>>& matrix, int N, int M) {
    //write code here...
    int l=matrix[0][0];
    int r=matrix[0][M-1];
    for (int i = 1; i < N; i++) {
        l=min(l, matrix[i][0]);
        r=max(r, matrix[i][M-1]);
    }
    int cnt=(N*M)/2+1;
    int median=l;
    while (l<=r) {
        int mid=l+((r-l)>>1);
        int check=0;
        for (int i = 0; i < N; i++) {
            check+=std::upper_bound(matrix[i].begin(), matrix[i].end(), mid)-matrix[i].begin();
        }
        if (check>=cnt) {
            median=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    return median;
}