/*

 vector<long long int> productExceptSelf(vector<long long int>& arr, int n) {
       
        int cnt = 0;
        
        long long int mul = 1;
        for(auto it:arr)
        {
            if(it == 0)cnt++;
            else mul = mul*it;
        }
        
       
            vector<long long int>ans(n);
        
        
        for(int i=0;i<n;i++)
        {
            if(cnt == 0){
                ans[i] = mul/arr[i];
            }
            else if(cnt == 1){
                if(arr[i] == 0){
                    ans[i] = mul;
                }else{
                    ans[i] = 0;
                }
            }
            else{
                ans[i] = 0;
            }
        }
        
       
        
        return ans;
        
    }

*/