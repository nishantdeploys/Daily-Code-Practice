class Solution {
public:
    bool isVowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            return true;
        }
        return false;
    }

    int maxVowels(string s, int k) {

        int n = s.length();
        int start = 0,end = 0;
        int vowelsCount = 0;
        int ans = 0;
       
        while(end <= n){
            if(isVowel(s[end])) vowelsCount++;
            if((end-start+1) < k){
                end++;
            }else if(end-start+1 == k){
                ans = max(ans,vowelsCount);
                
                if(isVowel(s[start])){
                    vowelsCount--;
                }
                
                start++;
                end++;
            }
        }
        return ans;
    }
};