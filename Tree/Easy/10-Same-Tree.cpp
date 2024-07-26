/*

 bool f(TreeNode* p, TreeNode* q) {

        if((!p && q) || (p && !q))return false;

        if(!p && !q)return true;

        if (p->val != q->val) {
            return false;
        }

        return f(p->left, q->left) && f(p->right, q->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        return f(p,q);
    }


*/