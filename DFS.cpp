#include <bits/stdc++.h>
using namespace std;

void dfs(int i, vector<int> adj[], vector<int> &vis, vector<int> &ans)
{
    ans.push_back(i);
    vis[i] = 1;
    for (auto it : adj[i])
    {
        if (!vis[it])
        {
            dfs(it, adj, vis, ans);
        }
    }
}

vector<int> dfsOfGraph(int V, vector<int> adj[])
{
    // Code here
    vector<int> ans;
    vector<int> vis(V, 0);
    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
        {
            dfs(i, adj, vis, ans);
        }
    }
    return ans;
}