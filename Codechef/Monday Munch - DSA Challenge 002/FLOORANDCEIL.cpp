// struct TreeNode {
//     int val;
//     TreeNode *left, *right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };

class Solution {
public:
    pair<int, int> floorAndCeil(TreeNode* root, int key) {
        // write your code here 
        TreeNode *cur=root;
        int l=-1;
        int r=-1;
        while (cur!=NULL) {
            if (cur->val==key) return {key, key};
            if (key<cur->val) {
                r=cur->val;
                cur=cur->left;
            }
            else {
                l=cur->val;
                cur=cur->right;
            }
        }
        return {l, r};
    }
};
