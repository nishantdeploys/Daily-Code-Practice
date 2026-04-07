class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> seen;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int curr = nums[i];
            int need = target - curr;
            if(seen.contains(need)){
                return {seen[need],i};
            }
            seen[curr] = i;
        }
        return {};
    }
};