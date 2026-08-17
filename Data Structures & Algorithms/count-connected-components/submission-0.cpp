class Solution {
public:

    void helper(vector<int> adj[], vector<bool>& visited, int i)
    {
        visited[i] = true;

        queue<int> q;
        q.push(i);

        while(!q.empty())
        {
            int node = q.front();
            q.pop();

            for(auto nodes : adj[node])
            {
                if(!visited[nodes])
                {
                    visited[nodes] = true;
                    q.push(nodes);
                }
            }
        }
    }

    int countComponents(int n, vector<vector<int>>& edges)
    {
        vector<int> adj[n];

        // Create adjacency list
        for(int i = 0; i < edges.size(); i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int res = 0;

        vector<bool> visited(n, false);

        // Find connected components
        for(int i = 0; i < n; i++)
        {
            if(!visited[i])
            {
                res++;
                helper(adj, visited, i);
            }
        }

        return res;
    }
};