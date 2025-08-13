#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n==0) return 0;
    int ans = n+sum(n-1);
    // sum(n-1);ṇ
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
    // sum(n);
}