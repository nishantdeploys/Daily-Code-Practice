#include<bits/stdc++.h>
using namespace std;
int main(){
    
    vector<int> arr = {4,3,5,-1,2,8,7,6,1};
    int k = 3; 
    
    int windowSum = 0;
    for(int i = 0; i < k; i++){
        windowSum += arr[i];
    }
    
    int maxSum = windowSum;
    
    for(int i = k; i < arr.size(); i++){
        windowSum += arr[i] - arr[i-k];
        maxSum = max(maxSum, windowSum);
    }
    
    cout << "Maximum sum of " << k << " consecutive elements: " << maxSum << endl;
    
    return 0;
}