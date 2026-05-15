class Solution {
public:
    unordered_map<string, vector<pair<string, double>>> graph;

    bool dfs(string curr, string target, unordered_set<string>& visited, double& result) {
        if (curr == target)
            return true;

        visited.insert(curr);

        for (auto& nei : graph[curr]) {
            string next = nei.first;
            double val = nei.second;

            if (visited.count(next)) continue;

            double prev = result;
            result *= val;

            if (dfs(next, target, visited, result))
                return true;

            result = prev;  // backtrack
        }
        return false;
    }

    vector<double> calcEquation(vector<vector<string>>& equations,
                                vector<double>& values,
                                vector<vector<string>>& queries) {

        // Build graph
        for (int i = 0; i < equations.size(); i++) {
            string a = equations[i][0];
            string b = equations[i][1];
            double val = values[i];

            graph[a].push_back({b, val});
            graph[b].push_back({a, 1.0 / val});
        }

        vector<double> ans;

        for (auto& q : queries) {
            string src = q[0];
            string dest = q[1];

            // variable not present
            if (!graph.count(src) || !graph.count(dest)) {
                ans.push_back(-1.0);
                continue;
            }

            unordered_set<string> visited;
            double result = 1.0;

            if (dfs(src, dest, visited, result))
                ans.push_back(result);
            else
                ans.push_back(-1.0);
        }

        return ans;
    }
};
