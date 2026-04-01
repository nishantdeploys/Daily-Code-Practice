class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int n = positions.size();
        vector<int> indices(n);
        
        // Fill indices with 0, 1, ..., n-1
        iota(indices.begin(), indices.end(), 0);

        // 1. Sort indices based on the physical position of the robots
        sort(indices.begin(), indices.end(), [&](int i, int j) {
            return positions[i] < positions[j];
        });

        vector<int> st; // This acts as our stack, storing indices of robots

        for (int i : indices) {
            // Robot moving Right: No immediate collision possible, push to stack
            if (directions[i] == 'R') {
                st.push_back(i);
            } 
            // Robot moving Left: Check for collisions with 'R' robots in the stack
            else {
                while (!st.empty() && directions[st.back()] == 'R' && healths[i] > 0) {
                    int topIndex = st.back();
                    
                    if (healths[topIndex] < healths[i]) {
                        // Current (Left) is stronger: Top (Right) destroyed
                        healths[topIndex] = 0;
                        healths[i] -= 1;
                        st.pop_back();
                    } else if (healths[topIndex] > healths[i]) {
                        // Top (Right) is stronger: Current (Left) destroyed
                        healths[topIndex] -= 1;
                        healths[i] = 0;
                    } else {
                        // Both have equal health: Both destroyed
                        healths[topIndex] = 0;
                        healths[i] = 0;
                        st.pop_back();
                    }
                }
                
                // If the Left-moving robot survived all collisions, add to stack
                if (healths[i] > 0) {
                    st.push_back(i);
                }
            }
        }

        // 2. Collect healths of survivors in their original input order
        vector<int> result;
        for (int i = 0; i < n; i++) {
            if (healths[i] > 0) {
                result.push_back(healths[i]);
            }
        }

        return result;
        
    }
};