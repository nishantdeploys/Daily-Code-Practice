#include<bits/stdc++.h>
using namespace std;
int main(){
    int row = 5,col = 5;
    int arr[row][col];
    int currRow = -1;
    int currCol = -1;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
            if(arr[i][j] == 1){
                currRow = i;
                currCol = j;
            }
        }
    }
    int minMoves = abs(currRow - 2) + abs(currCol - 2);

    cout<<minMoves;


}