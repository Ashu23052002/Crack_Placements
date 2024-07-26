/*

int minChanges(int n, int k) {
            
            if(n==k)return 0;
            int cnt=0;
           for(int i=0;i<=31;i++){
                 int f = (n>>i)&1;
                 int s = (k>>i)&1;
                 
                 if(f!=s){
                     if(f==1 && s==0)cnt++;
                     else if(f==0 && s==1)return -1;
                 }
           }
            return cnt;
    }

*/