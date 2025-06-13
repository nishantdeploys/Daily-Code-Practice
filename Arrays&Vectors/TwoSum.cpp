#include<bits/stdc++.h>
using namespace std;

void twoSum(vector<int> &v , int tar){

    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]+v[j] == tar){
                cout<<"( "<<i<<" , "<<j<<" )"<<endl;
            }
        }
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the size of the vector"<<endl;
    cin>>n;

    vector<int> v;

    cout<<"Enter the Elements of the vecter"<<endl;;

    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }

    cout<<"Enter the target"<<endl;;
    int tar;
    cin>>tar;

    twoSum(v,tar);
}