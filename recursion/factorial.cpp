#include<bits/stdc++.h>
using namespace std;
int factor(int n){
    // int fact = 1;
    if(n==1) return 1;
    return n*factor(n-1);
}
int main(){
    cout<<factor(5);

}