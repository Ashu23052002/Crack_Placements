#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &image, vector<vector<int>> &ans, int sr, int sc, int newColor, int oldColor)
{

    if (sr < 0 || sr >= ans.size() || sc < 0 || sc >= ans[0].size())
        return;
    if (image[sr][sc] != oldColor || ans[sr][sc] == newColor)
        return;

    ans[sr][sc] = newColor;

    dfs(image, ans, sr + 1, sc, newColor, oldColor);
    dfs(image, ans, sr - 1, sc, newColor, oldColor);
    dfs(image, ans, sr, sc + 1, newColor, oldColor);
    dfs(image, ans, sr, sc - 1, newColor, oldColor);
}
vector<vector<int>> floodFill(vector<vector<int>> &image,
                              int sr, int sc, int color)
{

    if (image[sr][sc] == color)
        return image;

    vector<vector<int>> ans = image;

    dfs(image, ans, sr, sc, color, image[sr][sc]);

    return ans;
}