#include<bits/stdc++.h>
using namespace std;
int main(){
    int stones;
    cin >> stones;

    string color;
    cin>>color;

    int count = 0;
    for(int i=0;i<=stones;i++){
        if(color[i] == color[i-1]){
            count++;
        }
    }
    cout << count << endl;
}