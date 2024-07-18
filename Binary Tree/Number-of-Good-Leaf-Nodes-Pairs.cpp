/*
You are given the root of a binary tree and an integer distance.
A pair of two different leaf nodes of a binary tree is said to be good if the length of the shortest path between them is less than or equal to distance.

Return the number of good leaf node pairs in the tree.

Input: root = [1,2,3,null,4], distance = 3
Output: 1
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countPairs(TreeNode *root, int distance)
    {
        int pairs = 0;
        dfs(root, distance, pairs);
        return pairs;
    }

private:
    vector<int> dfs(TreeNode *node, int distance, int &pairs)
    {
        if (!node)
            return {};

        if (!node->left && !node->right)
            return {1};

        vector<int> leftDistances = dfs(node->left, distance, pairs);
        vector<int> rightDistances = dfs(node->right, distance, pairs);

        for (int ld : leftDistances)
        {
            for (int rd : rightDistances)
            {
                if (ld + rd <= distance)
                    pairs++;
            }
        }

        vector<int> result;
        for (int ld : leftDistances)
        {
            if (ld + 1 <= distance)
                result.push_back(ld + 1);
        }
        for (int rd : rightDistances)
        {
            if (rd + 1 <= distance)
                result.push_back(rd + 1);
        }

        return result;
    }
};

// Approach-1 (Using Graph and BFS)
// T.C : O(n^2)
// S.C : O(n)

class Solution
{
public:
    void makeGraph(TreeNode *root, TreeNode *prev, unordered_map<TreeNode *, vector<TreeNode *>> &adj,
                   unordered_set<TreeNode *> &st)
    {

        if (root == NULL)
        {
            return;
        }

        if (root->left == NULL && root->right == NULL)
        { // LEAF NODE
            st.insert(root);
        }

        if (prev != NULL)
        {
            adj[root].push_back(prev);
            adj[prev].push_back(root);
        }

        makeGraph(root->left, root, adj, st);
        makeGraph(root->right, root, adj, st);
    }

    int countPairs(TreeNode *root, int distance)
    {
        unordered_map<TreeNode *, vector<TreeNode *>> adj; // Graph
        unordered_set<TreeNode *> st;                      // leaf nodes

        makeGraph(root, NULL, adj, st);

        int count = 0; // count of good node pairs

        for (auto &leaf : st)
        {

            // BFS hit karo and see if you can find another leaf nodes within distance
            queue<TreeNode *> que;
            unordered_set<TreeNode *> visited;
            que.push(leaf);
            visited.insert(leaf);

            for (int level = 0; level <= distance; level++)
            { // only go till level <= distance
                int size = que.size();
                while (size--)
                { // level processed
                    TreeNode *curr = que.front();
                    que.pop();

                    if (curr != leaf && st.count(curr))
                    {
                        count++;
                    }

                    for (auto &ngbr : adj[curr])
                    {
                        if (!visited.count(ngbr))
                        {
                            que.push(ngbr);
                            visited.insert(ngbr);
                        }
                    }
                }
            }
        }
        return count / 2;
    }
};
