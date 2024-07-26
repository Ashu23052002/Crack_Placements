/*

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        int n = nums.size();
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        for(auto it:mp){
            pq.push({it.second,it.first});

            if(pq.size()>k){
                pq.pop();
            }
        }

        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            ans.push_back(it.second);
        }

        return ans;
    }
};

*/