#include<bits/stdc++.h>
using namespace std;

void increment(int &n){
     n+=5;
}

int main(){
    int n;
    cout<<"Enter a Number to Increment by 5: ";
    cin>>n;
    increment(n);
    cout<<n;

}