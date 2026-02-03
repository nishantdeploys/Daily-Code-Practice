<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

int checkIsSubstring(string str1,string str2){
    //logic;
    int pos = str1.find(str2);

    if(pos != string::npos){
        return pos;
    }else{
        return -1;
    }

}

int main(){
    string str1, str2;
    getline(cin,str1);
    getline(cin,str2);
 
    cout<<str1<<" "<<str2<<endl;

    cout<<checkIsSubstring(str1,str2);
}
=======
#include<iostream>
using namespace std;
int main(){
    cout<<"Jai Shree Ram";
    return 0;
}
>>>>>>> origin/master
