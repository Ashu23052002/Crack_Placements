/*

bool f(TreeNode* root, int sum) {
        
        if(!root)return false;
        
        if(!root->left && !root->right){
            if(sum-root->val==0)return true;
            return false;
        }
        



        return f(root->left,sum-root->val) || f(root->right,sum-root->val);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        return f(root,targetSum);
    }

*/