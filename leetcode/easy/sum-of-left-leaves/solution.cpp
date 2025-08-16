// Time: O() 
// Space: O()

class Solution {
    int sum(TreeNode* root, bool flag) {
        if(!root) {
            return 0;
        }
        
        if((root->left == nullptr && root->right == nullptr) && (flag)) {
            return root->val;
        }

        return sum(root->left, true) + sum(root->right, false);
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        return sum(root, false);
    }
};