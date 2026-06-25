class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());

        int maxilen = 0;
        for(int num:st){
            if(!st.contains(num-1)){
                int currnum = num;
                int cnt = 1;
                while(st.contains(currnum+1)){
                    currnum++;
                    cnt++;
                }
                maxilen = max(maxilen,cnt);
            }
        }
        return maxilen;
    }
};