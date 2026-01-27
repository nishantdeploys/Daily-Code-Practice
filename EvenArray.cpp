// CodeForece Solution Accepted 46ms

#include<bits/stdc++.h>
using namespace std;

int main(){
    int Case;
    cin >> Case;
    
    while(Case--){
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int evenIndex = (n+1)/2;
        int oddIndex = n/2;
        int oddCount = 0,evenCount = 0;

        for(int x:arr){
            if(x%2 == 0){
                evenCount++;
            }else{
                oddCount++;
            }
        }

        if(evenIndex != evenCount || oddIndex != oddCount){
            cout<<-1 <<"\n";
            continue;
        }

        int mismatch = 0;
        for(int i=0;i<n;i++){
            if((i%2) != (arr[i]%2)){
                mismatch++;
            }
        }
        cout<<mismatch / 2<<"\n";
        
    }

    return 0;

}