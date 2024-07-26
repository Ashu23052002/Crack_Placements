/*

class Solution {
public:
    int nthUglyNumber(int n) {
        
        if(n==1)return true;
        int t2=0,t3=0,t5=0;
        vector<int>arr(n);
        arr[0]=1;
        for(int i=1;i<n;i++){
            arr[i]=min(arr[t2]*2,min(arr[t3]*3,arr[t5]*5));
            if(arr[i]==arr[t2]*2)t2++;
            if(arr[i]==arr[t3]*3)t3++;
            if(arr[i]==arr[t5]*5)t5++;
        }

        return arr[n-1];
    }
};

*/