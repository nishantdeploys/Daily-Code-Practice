class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long long sum = static_cast<long long>(mass);
        for(int i=0;i<asteroids.size();i++){
            if(sum < asteroids[i]) return false;
            else{
                sum += asteroids[i];
            }
        }
        return true;
    }
};