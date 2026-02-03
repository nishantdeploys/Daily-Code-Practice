#include<bits/stdc++.h>
using namespace std;
void wordCapitalization(string &s){
    if(s.size()<0) return;
    s[0] = toupper(s[0]);
}
int main(){
    string s;
    cin >> s;

    wordCapitalization(s);
    cout<<s;
}