#include<iostream>
using namespace std;

void reverse(int arr[], int k){
    int n=0,m=k-1;
    while(n<m){
        int temp=arr[n];
        arr[n]=arr[m];
        arr[m]=temp;
        n++;
        m--;
    }
}

int main(){
    int k;
    cin>>k;
    int arr[k];
    for(int i=0;i<k;i++){
        cin>>arr[i];
    }
    cout<<"Original Array: ";
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse(arr,k);
    cout<<"Reversed Array: ";
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
}