/*

void buildTree(int i, int l, int r, vector<int>&segmentTree, int arr[]) 
    {
        if(l==r){
            segmentTree[i] = arr[l];
            return;
        }
        
        int mid = l+(r-l)/2;
        
        buildTree(2*i+1,l,mid,segmentTree,arr);
        buildTree(2*i+2,mid+1,r,segmentTree,arr);
        
        segmentTree[i] = segmentTree[2*i+1] + segmentTree[2*i+2];
    }
    
    int Query(int start, int end, int i, int l, int r, vector<int>&segmentTree)
    {
        // 1. out of bound
        if(r<start || l>end){
            return 0;
        }
        
        // 2. in bound
        if(l>=start && r<=end){
            return segmentTree[i];
        }
        
        int mid = l+(r-l)/2;
        
        return Query(start,end,2*i+1,l,mid,segmentTree) + Query(start,end,2*i+2,mid+1,r,segmentTree);
    }
    
    vector<int> querySum(int n, int arr[], int q, int queries[])
    {
        
        vector<int>segmentTree(4*n);
        
        buildTree(0,0,n-1,segmentTree,arr);
        
        vector<int>ans;
        
        for(int i=0;i<2*q;i=i+2){
            int start = queries[i]-1;
            int end = queries[i+1]-1;
            
            ans.push_back(Query(start,end,0,0,n-1,segmentTree));
        }
        
        return ans;
    }

*/