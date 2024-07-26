#include <bits/stdc++.h>
using namespace std;

vector<int> luckyNumbers(vector<vector<int>> &matrix)
{

    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> ans;

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         int ele = matrix[i][j];
    //         int minRow = INT_MAX;
    //         int maxCol = INT_MIN;

    //         for(int k=0;k<n;k++){
    //             maxCol = max(maxCol,matrix[k][j]);
    //         }
    //          for(int k=0;k<m;k++){
    //             minRow = min(minRow,matrix[i][k]);
    //         }

    //         if(maxCol==ele && minRow==ele)ans.push_back(ele);
    //     }
    // }

    // evry matrix has only 1 lucky numer

    unordered_set<int> st;
    for (int i = 0; i < n; i++)
    {
        int minEle = INT_MAX;
        for (int j = 0; j < m; j++)
        {
            minEle = min(minEle, matrix[i][j]);
        }
        st.insert(minEle);
    }
    for (int j = 0; j < m; j++)
    {
        int maxEle = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            maxEle = max(maxEle, matrix[i][j]);
        }
        if (st.count(maxEle))
            return {maxEle};
    }
    return {};
}

/*==================================================================================*/

void merge(vector<int> &count, vector<pair<int, int>> &v, int left, int mid, int right)
{
    vector<pair<int, int>> temp(right - left + 1);
    int i = left;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= right)
    {

        if (v[i].first <= v[j].first)
        {
            temp[k++] = v[j++];
        }

        else
        {

            count[v[i].second] += right - j + 1;
            temp[k++] = v[i++];
        }
    }

    while (i <= mid)
    {
        temp[k++] = v[i++];
    }

    while (j <= right)
    {
        temp[k++] = v[j++];
    }

    for (int i = left; i <= right; i++)
    {
        v[i] = temp[i - left];
    }
}

void mergeSort(vector<int> &count, vector<pair<int, int>> &v, int left, int right)
{

    if (left < right)
    {
        int mid = left + (right - left) / 2;
        mergeSort(count, v, left, mid);
        mergeSort(count, v, mid + 1, right);
        merge(count, v, left, mid, right);
    }
}

vector<int> countSmaller(vector<int> &nums)
{
    int n = nums.size();
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        pair<int, int> p;
        p.first = nums[i];
        p.second = i;
        v[i] = p;
    }

    vector<int> count(n, 0);
    mergeSort(count, v, 0, n - 1);
    return count;
}