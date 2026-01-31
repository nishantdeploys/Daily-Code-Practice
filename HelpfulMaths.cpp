#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    vector<char> ch;
    for(int i=0;i<s.length();i+=2){
        ch.push_back(s[i]);
    }

    sort(ch.begin(),ch.end());

    for(int i=0;i<ch.size();i++){
        cout<<ch[i];
        if(i != ch.size()-1){
            cout<<"+";
        }
    }
}