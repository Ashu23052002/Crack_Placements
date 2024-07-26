/*

int f(vector<int>&h, int n) {
        
        stack<int>s;
        vector<int>left(n,0);
        
        // next smaller element
        for(int i=0;i<n;i++){
            while(!s.empty() && h[i]<=h[s.top()])s.pop();
            
            if(s.empty())left[i]=0;
            else left[i]=s.top()+1;
            
            s.push(i);
        }
        
        while(!s.empty())s.pop();
        vector<int>right(n,0);
        
        // next smaller element
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && h[i]<=h[s.top()])s.pop();
            
            if(s.empty())right[i]=n-1;
            else right[i]=s.top()-1;
            
            s.push(i);
        }
        
        int maxArea = 0;
        for(int i=0;i<n;i++){
            maxArea = max(maxArea,(right[i]-left[i]+1)*h[i]);
        }
        
        return maxArea;
    }
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        
        vector<int>h(m,0);
        int maxArea = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(M[i][j]==0){
                    h[j] = 0;
                }else{
                    h[j] += 1;
                }
            }
            maxArea = max(maxArea,f(h,m));
        }
        
        return maxArea;
    }

*/