class Solution {
public:
    int findPeakElement(const vector<int>& nums) {
        // write your code here
        int l=0;
        int r=nums.size()-1;
        while (l<r) {
            int mid=l+((r-l)>>1);
            if (nums[mid]<nums[mid+1]) l=mid+1;
            else r=mid;
        }
        return l;
    }
};