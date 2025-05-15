#include<iostream>
using namespace std;
void starPattern(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int a,b,c;
    cin>>a;
    /*Why to rewrite the code while we've function*/
    // for(int i=0;i<a;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<b;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<c;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    starPattern(a);
}