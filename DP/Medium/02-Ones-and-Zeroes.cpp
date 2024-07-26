/*

class Solution {
public:
    int f(vector<string>& strs, int m, int n, int i, vector<vector<vector<int>>>&dp) {

        if(i>=strs.size()){
            return 0;
        }

        if(dp[i][m][n] != -1)
           return dp[i][m][n];

        // take
        string s = strs[i];
        int one=0,zero=0;
        for(auto it:s){
            if(it=='0')zero++;
            else one++;
        }
        int take = 0;
        if(m-zero>=0 && n-one>=0)
           take = 1 + f(strs,m-zero,n-one,i+1,dp);

        // not-take
        int nottake = f(strs,m,n,i+1,dp);

        return dp[i][m][n] = max(take,nottake);

    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        int i=0;
        vector<vector<vector<int>>>dp(strs.size()+1,vector<vector<int>>(m+1,vector<int>(n+1,-1)));
        return f(strs,m,n,i,dp);
    }
};

====================================================================================================================

class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        
        vector<vector<vector<int>>> dp(
            strs.size() + 1, vector<vector<int>>(m + 1, vector<int>(n + 1, 0)));

        for (int i = strs.size() - 1; i >= 0; i--) {
            for (int j = 0; j <= m; j++) {
                for (int k = 0; k <= n; k++) {
                    // take
                    string s = strs[i];
                    int one = 0, zero = 0;
                    for (auto it : s) {
                        if (it == '0')
                            zero++;
                        else
                            one++;
                    }
                    int take = 0;
                    if (j - zero >= 0 && k - one >= 0)
                        take = 1 + dp[i + 1][j - zero][k - one];

                    // not-take
                    int nottake = dp[i + 1][j][k];

                    dp[i][j][k] = max(take, nottake);
                }
            }
        }

        return dp[0][m][n];
    }
};

=====================================================================================================

class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
       

            vector<vector<int>>curr(m + 1, vector<int>(n + 1, 0));
            vector<vector<int>>after(m + 1, vector<int>(n + 1, 0));

        for (int i = strs.size() - 1; i >= 0; i--) {
            for (int j = 0; j <= m; j++) {
                for (int k = 0; k <= n; k++) {
                    // take
                    string s = strs[i];
                    int one = 0, zero = 0;
                    for (auto it : s) {
                        if (it == '0')
                            zero++;
                        else
                            one++;
                    }
                    int take = 0;
                    if (j - zero >= 0 && k - one >= 0)
                        take = 1 + after[j - zero][k - one];

                    // not-take
                    int nottake = after[j][k];

                    curr[j][k] = max(take, nottake);
                }
            }
            after = curr;
        }

        return curr[m][n];
    }
};

*/