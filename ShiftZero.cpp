#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {0,1,0,0,1,1,0,1,1,1,0,1};
    int i=0;
    for(int j=0;j<arr.size();j++){
        if(arr[j] != 0){
            swap(arr[i],arr[j]);
            i++;
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}