/*

 int h(TreeNode* root) {

        if (!root)
            return 0;

        int l = h(root->left);
        int r = h(root->right);

        return 1 + max(l, r);
    }
    int maxDepth(TreeNode* root) { return h(root); }


*/