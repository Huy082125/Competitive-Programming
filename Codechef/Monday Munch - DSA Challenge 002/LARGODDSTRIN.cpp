void findLargestOddSubstring(string num) {
    // write your code here...
    bool check=false;
    for (int i = num.size()-1; i >= 0; i--) {
        if (num[i]%2!=0) {
            check=true;
            cout << num.substr(0, i+1);
            break;
        }
    }
    if (!check) cout << -1;
}