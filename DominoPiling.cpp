#include<iostream>
using namespace std;
void solve(int m,int n,int& ans){
    ans = (m*n)/2;
}
int main(){
    int m, n;
    cin >> m >> n;

    int ans = 0;
    solve(m,n,ans);

    cout << ans;
    
    return 0;

}