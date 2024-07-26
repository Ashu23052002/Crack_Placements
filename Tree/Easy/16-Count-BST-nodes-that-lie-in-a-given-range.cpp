/*

void f(Node* root, int& nodes, int l, int h)
    {
        if(!root)return;
        
        f(root->left,nodes,l,h);
        
        if(root->data>=l && root->data<=h)nodes++;
        
        f(root->right,nodes,l,h);
    }
    int getCount(Node *root, int l, int h)
    {
      int nodes = 0;
      f(root,nodes,l,h);
      return nodes;
    }


    ========================================================

     int f(Node* root, int& nodes, int l, int h)
    {
        if(!root)return 0;
        
        if(root->data > h)
         return f(root->left,nodes,l,h);
 
        else if(root->data < l)
          return f(root->right,nodes,l,h);
          
        else{
            return 1 + f(root->left,nodes,l,h) + f(root->right,nodes,l,h);
        }
    }
    int getCount(Node *root, int l, int h)
    {
      int nodes = 0;
      return f(root,nodes,l,h);
      
    }


*/