#include<bits/stdc++.h>
using namespace std;
int pow(int a,int b){
    if(b==0) return 1;
    return a*pow(a,b-1);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<pow(a,b);
}