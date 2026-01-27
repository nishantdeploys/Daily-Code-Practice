#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {1,3,4,2,0};
    int target = 6;
    bool flag = false;
    for(int i=0;i<5;i++){
        if((arr[i] + arr[i+1]) == target){
            flag = true;
            break;
        }
    }
    if(flag){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

}