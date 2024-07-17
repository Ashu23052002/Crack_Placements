#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int f(int ind, int buy, int n, vector<int>&prices) {

        if(ind == n)return 0;

        int profit = 0;

        if(buy){
            profit = max(-prices[ind]+f(ind+1,0,n,prices) , 0+f(ind+1,1,n,prices));
        }else{
            profit = max(prices[ind]+f(ind+1,1,n,prices) , 0+f(ind+1,0,n,prices));
        }

        return profit;

    }
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        return f(0,1,n,prices);
    }
};