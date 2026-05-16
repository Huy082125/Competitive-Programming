class Solution {
public:
    bool isBitSet(long long n, int i) {
        // write your code here
        if (n&(1<<i)) return true;
        return false;
    }
};