#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    int ans = 0;
    string statement;
    string ops1 = "X++";
    string ops2 = "++X";
    while(t--){
        cin>>statement;
        if(statement == ops1 || statement == ops2){
            ans++;
        }else{
            ans--;
        }
    }
    cout<<ans<<endl;
    return 0;
}