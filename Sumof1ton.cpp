#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
//Approach 1
    // int ans = 0;
    // for(int i=0;i<n;i++){
    //     ans=ans+i;
    // }
    // cout<<ans;

//Approach 2

    int ans = n*(n+1)/2;
    cout<<ans;
}