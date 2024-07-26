/*

void in(Node* root, vector<int>&t){
        if(!root)return;
        
        in(root->left,t);
        t.push_back(root->data);
        in(root->right,t);
    }
    vector<int> merge(Node *root1, Node *root2) {
        // Your code here
        vector<int>t1,t2;
        in(root1,t1);
        in(root2,t2);
        vector<int>ans;
        
        int i=0,j=0;
        while(i<t1.size() && j<t2.size()){
            if(t1[i]<=t2[j]){
                ans.push_back(t1[i]);
                i++;
            }
            else{
                ans.push_back(t2[j]);
                j++;
            }
        }
        while(i<t1.size()){
           
                ans.push_back(t1[i]);
                i++;
           
        }
        while(j<t2.size()){
            
                ans.push_back(t2[j]);
                j++;
            
        }
        
        return ans;
        
        
    }

*/