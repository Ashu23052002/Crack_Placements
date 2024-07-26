/*

int dfs(TreeNode* root) {

        if(!root)return 0;
         
         int sum = 0;
        if(root->left && !root->left->left && !root->left->right)
          sum += root->left->val;


        sum+=dfs(root->left);
        sum+=dfs(root->right);

        return sum;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        
        int sum = 0;
       
        return dfs(root);

    }

    =====================================================================

     int solve(TreeNode* root, bool isLeft) {

          if(!root)return 0;

          if(!root->left && !root->right && isLeft){
           
                return root->val;
            
          }
          int left = solve(root->left,true);
          int right = solve(root->right,false);

          return left + right;

     }
    int sumOfLeftLeaves(TreeNode* root) {
               
        return solve(root,false);
    }

*/