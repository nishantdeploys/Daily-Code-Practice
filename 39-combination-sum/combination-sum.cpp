class Solution {
public:
    void try_combination(vector<vector<int>>& combination,int index,int target,vector<int>& candidates,vector<int>& current){
        if(target == 0 ){
            combination.push_back(current);
            return;
        }
        if(target < 0 || index == candidates.size()) return;
        current.push_back(candidates[index]);
        try_combination(combination,index,target-candidates[index],candidates,current);
        current.pop_back();
        try_combination(combination,index+1,target,candidates,current); 
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> current;
        try_combination(ans,0,target,candidates,current);
        return ans;
    }
};