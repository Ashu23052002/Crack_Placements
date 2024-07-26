#include <bits/stdc++.h>
using namespace std;

// time : O(n+m)
// space : O(n*m)
vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        
        int m = rowSum.size();
        int n = colSum.size();
        
        int i=0,j=0;
        vector<vector<int>>mat(m,vector<int>(n,0));

        while(i<m && j<n){
            if(rowSum[i] >= colSum[j]){
                mat[i][j] = colSum[j];
                rowSum[i] -= colSum[j];
                j++;
            }
            else{
               mat[i][j] = rowSum[i];
               colSum[j] -= rowSum[i];
               i++;
            }
        }

        return mat;

    }