/*

 void inorder(TreeNode* root, vector<int>&in) {

        if(!root)return;

        inorder(root->left,in);
        in.push_back(root->val);
        inorder(root->right,in);
    }
    int getMinimumDifference(TreeNode* root) {

        vector<int>in;
        inorder(root,in);

        int diff = INT_MAX;
        for(int i=0;i<in.size()-1;i++){
            diff = min(diff,abs(in[i]-in[i+1]));
        }

        return diff;
    }


    =============================================================

    void inorder(TreeNode* root, int& diff, int& prev) {

        if(!root)return;

        inorder(root->left,diff,prev);
        if(prev >=0)diff = min(diff,abs(root->val-prev));
        prev = root->val;
        inorder(root->right,diff,prev);
    }
    int getMinimumDifference(TreeNode* root) {



        int diff = INT_MAX;
        int prev = -1;
        inorder(root,diff,prev);


        return diff;
    }



*/