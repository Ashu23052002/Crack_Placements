/*

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums2.size();
        vector<int>a1(n);
        stack<int>s;
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && nums2[i]>=s.top())s.pop();

            if(s.empty())a1[i]=-1;
            else a1[i]=s.top();

            s.push(nums2[i]);
        }

        unordered_map<int,int>mp;
        int m = nums1.size();
        for(int i=0;i<n;i++){
            mp[nums2[i]] = a1[i];
        }

        vector<int>a2;
        for(int i=0;i<m;i++){
            a2.push_back(mp[nums1[i]]);
        }

        return a2;
    }
};

*/