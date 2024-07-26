/*


 bool isBalanced(TreeNode* root) {
        return h(root) != -1;
    }

    int h(TreeNode* root){

        if(root == NULL)return 0;

        int l = h(root->left);
        if(l==-1)return -1;
        int r = h(root->right);
        if(r==-1)return -1;

        if(abs(l-r)>1)return -1;
        return max(l,r)+1;
    }





*/