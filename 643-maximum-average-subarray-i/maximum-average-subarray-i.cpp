class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();

        int start = 0,end = 0;
        int mx = INT_MIN;
        int sum = 0;

        while(end < n){
            sum += nums[end];
            if((end-start+1) < k){
                end++;
            }else if((end-start+1) == k){
                mx = max(mx,sum);
                sum -= nums[start];
                start++;
                end++;
            }
        }
        return (double)mx/k;
    }
};