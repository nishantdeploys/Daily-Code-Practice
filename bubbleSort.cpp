#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
    int arr[n] = {4,1,5,2,3};
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}