class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int, int>> pq; // {value, index}
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            pq.push({nums[i], i});

            // First window is ready
            if (i >= k - 1) {

                // Remove elements outside current window
                while (!pq.empty() && pq.top().second <= i - k) {
                    pq.pop();
                }

                ans.push_back(pq.top().first);
            }
        }

        return ans;
    }
};