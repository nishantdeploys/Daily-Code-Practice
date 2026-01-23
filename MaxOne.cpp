# include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {0,1,0,1,1,1,1,1,0,0,1,1,1,1};
    int count = 0,maxCount = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i] == 1){
            count++;
            if(count > maxCount) maxCount = count;
        }else{
            count = 0;
        }
    }
    cout<<maxCount;
}