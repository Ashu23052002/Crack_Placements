/*

void in(TreeNode* root, vector<int>&ans) {

        if(!root)return;

        in(root->left,ans);
        ans.push_back(root->val);
        in(root->right,ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int>ans;

        in(root,ans);

        return ans;
    }

    ==================================

    // 1. Morris Inorder Traversal
void morrisTraversalInorder(node *root)
{
    node *curr, *pre;
    if (root == NULL)
        return;

    curr = root;

    while (curr != NULL)
    {

        if (curr->left == NULL)
        {
            cout << curr->data << " ";
            curr = curr->right;
        }

        else
        {
            pre = curr->left;
            while (pre->right != NULL && pre->right != curr)
            {
                pre = pre->right;
            }

            if (pre->right == NULL)
            {
                pre->right = curr;
                curr = curr->left;
            }
            else
            {
                pre->right = NULL;
                cout << curr->data << " ";
                curr = curr->right;
            }
        }
    }
}

*/