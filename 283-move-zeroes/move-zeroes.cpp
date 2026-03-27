class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n = arr.size()-1;
        int j=0;
        for(int i=0;i<=n;i++){
            if(arr[i]!=0){
                arr[j++] = arr[i];
            }
        }
        for(int k=j;k<=n;k++){
            arr[k] = 0;
        }
    }
};