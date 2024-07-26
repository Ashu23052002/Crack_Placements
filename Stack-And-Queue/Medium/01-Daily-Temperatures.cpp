/*

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        stack<int> s;
        int n = temperatures.size();
        vector<int> ans(n, 0);

        for (int i = n - 1; i >= 0; i--) {
            while (!s.empty() && temperatures[i] >= temperatures[s.top()]) {
                s.pop();
            }

            if (s.empty()) {
                ans[i] = 0;
            } else {
                ans[i] = s.top() - i ;
            }
            s.push(i);
        }

        return ans;
    }
};

*/