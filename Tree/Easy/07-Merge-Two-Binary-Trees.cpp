/*

 TreeNode* f(TreeNode* root1, TreeNode* root2) {
        
        if(!root1 && !root2)return NULL;
        if(root1 && !root2)return root1;
        if(!root1 && root2)return root2;


        int val = 0;
        if(root1)val+=root1->val;
        if(root2)val+=root2->val;

        TreeNode* root = new TreeNode(val);
        root->left = f(root1->left,root2->left);
        root->right = f(root1->right,root2->right);

        return root;
    }

    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        
        return f(root1,root2);
    }


    */