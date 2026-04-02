class Solution {
public:
    int maximumAmount(vector<vector<int>>& coins) {
        int m = coins.size();
        int n = coins[0].size();
        
        long long INF = 1e18;
        vector<vector<vector<long long>>> dp(m, vector<vector<long long>>(n, vector<long long>(3, -INF)));

        for (int k = 0; k < 3; ++k) {
            if (coins[0][0] < 0) {
                dp[0][0][0] = coins[0][0]; // Case: Don't neutralize
                if (k > 0) dp[0][0][k] = 0; // Case: Use neutralization
            } else {
                dp[0][0][k] = coins[0][0];
            }
        }

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i == 0 && j == 0) continue;

                for (int k = 0; k < 3; ++k) {
                    long long maxPrev = -INF;
                    
                    if (i > 0) maxPrev = max(maxPrev, dp[i - 1][j][k]);
                    if (j > 0) maxPrev = max(maxPrev, dp[i][j - 1][k]);

                    if (maxPrev != -INF) {
                        if (coins[i][j] >= 0) {
                            dp[i][j][k] = max(dp[i][j][k], maxPrev + coins[i][j]);
                        } else {
                            dp[i][j][k] = max(dp[i][j][k], maxPrev + coins[i][j]);
                            
                            if (k > 0) {
                                long long maxPrevKMinus1 = -INF;
                                if (i > 0) maxPrevKMinus1 = max(maxPrevKMinus1, dp[i - 1][j][k - 1]);
                                if (j > 0) maxPrevKMinus1 = max(maxPrevKMinus1, dp[i][j - 1][k - 1]);
                                
                                if (maxPrevKMinus1 != -INF) {
                                    dp[i][j][k] = max(dp[i][j][k], maxPrevKMinus1);
                                }
                            }
                        }
                    }
                }
            }
        }

        return (int)max({dp[m - 1][n - 1][0], dp[m - 1][n - 1][1], dp[m - 1][n - 1][2]});
    }
};