class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n-1;
        int idx = n-1;
        
        vector<int> ans(n);

        while(left <= right){
            int leftSquare = nums[left] * nums[left];
            int rightSquare = nums[right] * nums[right];

            if(leftSquare > rightSquare){
                ans[idx] = leftSquare;
                left++;
            }else{
                ans[idx] = rightSquare;
                right--;
            }
            idx--;
        }
        return ans;
    }
};