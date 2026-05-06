class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int m = box.size();
        int n = box[0].size();

        // Step 1: Apply gravity (right side)
        for (int i = 0; i < m; i++) {
            int emptyPos = n - 1;  // where next stone should fall

            for (int j = n - 1; j >= 0; j--) {
                if (box[i][j] == '*') {
                    emptyPos = j - 1; // reset after obstacle
                } 
                else if (box[i][j] == '#') {
                    swap(box[i][j], box[i][emptyPos]);
                    emptyPos--;
                }
            }
        }

        // Step 2: Rotate 90° clockwise
        vector<vector<char>> ans(n, vector<char>(m));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                ans[j][m - 1 - i] = box[i][j];
            }
        }

        return ans;
    }
};