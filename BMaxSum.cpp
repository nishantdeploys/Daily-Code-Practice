#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {5,-2,3,1,2};
    int n = arr.size();
    int b;
    cin >> b;

    if(b>n){
        cout<<"Invalid";
    }

    int windowSum = 0;
    int maxSum = 0;
    
    for(int i=0;i<b;i++){
        windowSum += arr[i];
    }
    
    maxSum = windowSum;
    
    for(int i = b;i<n;i++){
        windowSum = windowSum - arr[i - b] + arr[i];
        maxSum = max(windowSum,maxSum);
    }
    cout<<maxSum;
    
}