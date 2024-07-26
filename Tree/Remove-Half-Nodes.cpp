/*

Node* fun(Node* root) {
        
         if(!root)return NULL;
       
         root->left = fun(root->left);
         root->right = fun(root->right);
         
         if(!root->left && root->right)return root->right;
         if(root->left && !root->right)return root->left;
         return root;
    }
    Node *RemoveHalfNodes(Node *root) {
        
        return fun(root);
    }

*/