/*

 void helper(TreeNode* root){

        if(!root)return;

        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;

        helper(root->left);
        helper(root->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        
        helper(root);
        return root;
    }

==========================================================================

 TreeNode* invertTree(TreeNode* root) {

        if(!root)return root;

        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();

            TreeNode* temp = curr->left;
            curr->left = curr->right;
            curr->right = temp;

            if(curr->left)q.push(curr->left);
            if(curr->right)q.push(curr->right);
        }
        return root;
    }
*/