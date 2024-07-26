/*

 Node* f(vector<int>&arr, int i, int j) {
        
        if(i>j)return NULL;
        
        int mid = (j+i)/2;
        Node* root = new Node(arr[mid]);
        root->left = f(arr,i,mid-1);
        root->right = f(arr,mid+1,j);
        
        return root;
    }
    Node* sortedArrayToBST(vector<int>& nums) {
        
        int n = nums.size();
        return f(nums,0,n-1);
    }

*/