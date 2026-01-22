#include<bits/stdc++.h>
using namespace std;

void printTable(int n){
    for(int i=1;i<10;i++){
        cout<<i*n<<endl;
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter a Number to Print Table : ";
    cin>>n;
    printTable(n);

}