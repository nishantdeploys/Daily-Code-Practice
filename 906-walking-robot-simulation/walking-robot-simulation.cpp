class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        
        // Store obstacles in a set
        unordered_set<string> st;
        for (auto &o : obstacles) {
            st.insert(to_string(o[0]) + "," + to_string(o[1]));
        }
        
        // Directions: N, E, S, W
        vector<pair<int,int>> dir = {
            {0,1}, {1,0}, {0,-1}, {-1,0}
        };
        
        int d = 0; // initially facing North
        int x = 0, y = 0;
        int maxDist = 0;
        
        for (int cmd : commands) {
            
            if (cmd == -1) {
                d = (d + 1) % 4; // turn right
            }
            else if (cmd == -2) {
                d = (d + 3) % 4; // turn left
            }
            else {
                // move step by step
                for (int i = 0; i < cmd; i++) {
                    int nx = x + dir[d].first;
                    int ny = y + dir[d].second;
                    
                    string key = to_string(nx) + "," + to_string(ny);
                    
                    if (st.count(key)) break; // obstacle
                    
                    x = nx;
                    y = ny;
                    
                    maxDist = max(maxDist, x*x + y*y);
                }
            }
        }
        
        return maxDist;
    }
};