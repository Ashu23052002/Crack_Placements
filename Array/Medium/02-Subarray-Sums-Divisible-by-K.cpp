/*
        int n = nums.size();
        int cnt = 0;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                if(sum%k==0)cnt++;
            }
        }

        return cnt;

===========================================================

 unordered_map<int,int>mp;
        mp[0]=1;
        int sum=0,cnt=0;
        for(auto it:nums)
        {
           sum+=it;
           int rem=sum%k;
           if(rem<0)rem+=k;
           cnt+=mp[rem];
           mp[rem]++;
        }

        return cnt;

*/