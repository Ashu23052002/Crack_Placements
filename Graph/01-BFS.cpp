#include <bits/stdc++.h>
using namespace std;

vector<int> bfsOfGraph(int V, vector<int> adj[])
{
    // Code here
    queue<int> q;
    vector<int> ans;
    vector<int> vis(V, 0);

    q.push(0);
    vis[0] = 1;

    while (!q.empty())
    {
        int f = q.front();
        q.pop();
        ans.push_back(f);

        for (auto it : adj[f])
        {
            if (!vis[it])
            {
                q.push(it);
                vis[it] = 1;
            }
        }
    }

    return ans;
}