/*

 int height(TreeNode* root, int &d){

        if(!root)return 0;

        int left = height(root->left,d);
        int right = height(root->right,d);

        d = max(d,left+right);

        return 1+max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        int d=0;
        height(root,d);
        return d;
    }

*/