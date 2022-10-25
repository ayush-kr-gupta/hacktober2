#include <bits/stdc++.h>
using namespace std;

vector<int> bfsOfGraph(int V, vector<int> adj[])
{
    // Code here
    queue<int> q;
    vector<int> vis(V, 0);
    vector<int> bfs;
    q.push(0);
    vis[0] = 1;
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        bfs.push_back(temp);
        for (auto it : adj[temp])
        {
            if (!vis[it])
            {
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    return bfs;
}