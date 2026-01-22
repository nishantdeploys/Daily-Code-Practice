#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
//Approach 1
    // if(n%2 == 0){
    //     cout<<n<<" Is even"<<endl; 
    // }else{
    //     cout<<n<<" Is odd"<<endl;
    // }
//Approach 2
    if(n&1){
        cout<<"Odd";
    }else{
        cout<<"Even";
    }
    
}