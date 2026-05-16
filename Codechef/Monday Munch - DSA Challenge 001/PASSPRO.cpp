string checkPassword(int arr[], int n) {
    // write your code here 
    int sum=0;
    for (int i = 0; i < n; i++) {
        sum+=arr[i];
    }
    if (sum==n) return "SECURE";
    return "NOT SECURE";
}