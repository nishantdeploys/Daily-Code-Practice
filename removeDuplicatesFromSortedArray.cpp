#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k = 1;
    for(int i=1;i<arr.size();i++){
        if(arr[i] != arr[i-1]){
            arr[k] = arr[i];
            k++;
        }
    }
    cout<<k;
}