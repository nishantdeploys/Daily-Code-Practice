#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {6,2,5,67,23,45,13};
    int left = 0 , right = arr.size()-1;
    while(left < right){
        swap(arr[left],arr[right]);
            left++;
            right--;
        
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}