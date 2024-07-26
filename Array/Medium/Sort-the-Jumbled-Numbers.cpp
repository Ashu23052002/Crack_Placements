/*

 vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {

        map<int, vector<int>> mp;

        for (auto it : nums) {
            int num = it;
            int ans = 0;
            int m = 1;

            if (num == 0) {
                mp[mapping[0]].push_back(0);
            } else {

                while (num) {
                    int rem = num % 10;
                    ans = m * mapping[rem] + ans;
                    num = num / 10;
                    m = m * 10;
                }

                mp[ans].push_back(it);
            }
        }

        vector<int> ans;

        for (auto i : mp) {
            vector<int> v = i.second;
            for (auto j : v) {
                ans.push_back(j);
            }
        }

        return ans;
    }

*/