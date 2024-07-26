/*

void bst(TreeNode* root, int low, int high, int& sum) {

       if(!root)return;

       bst(root->left,low,high,sum);

       if(root->val>=low && root->val<=high){
        sum += root->val;
       }

       bst(root->right,low,high,sum);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {

        int sum = 0;
        bst(root,low,high,sum);

        return sum;

    }

    ================================================================================

    int bst(TreeNode* root, int low, int high) {

        if(!root)return 0;

        if(root->val>=low && root->val<=high){
            return root->val + bst(root->left,low,high) + bst(root->right,low,high);
        }

        if(root->val < low)return bst(root->right,low,high);

        return bst(root->left,low,high);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {

        return bst(root,low,high);
    }

*/