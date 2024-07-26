/*

 bool isSymmetric(TreeNode* root) {

        return !root || check(root->left,root->right);
    }

    bool check(TreeNode* left, TreeNode* right) {

        if(!left || !right)return left==right;

        if(left->val!=right->val)return false;

        return check(left->left,right->right) && check(left->right,right->left);
    }

*/