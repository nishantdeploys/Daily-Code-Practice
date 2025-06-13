#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int> &v){
    int i=0;
    int j=v.size()-1;
    while(i<j){
        swap(v[i],v[j]);
        i++;
        j--;
    }

}
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;

    vector<int> v;

    cout<<"Enter the Elements of the array: "<<endl;
    for(int i=0;i<size;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }

    reverse(v);
    display(v);


}