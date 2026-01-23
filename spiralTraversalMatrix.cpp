#include<bits/stdc++.h>
using namespace std;
int main(){
    int row = 3,col = 4;
    int arr[row][col] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int top = 0,bottom = row - 1,left = 0 ,right = col -1;

    while(top <= bottom && left <= right){
        for (int i = left; i <= right; i++)
            cout << arr[top][i] << " ";
            top++;

        // top to bottom
        for (int i = top; i <= bottom; i++)
            cout << arr[i][right] << " ";
            right--;

        // right to left
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                cout << arr[bottom][i] << " ";
                bottom--;
        }

        // bottom to top
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                cout << arr[i][left] << " ";
                left++;
        }
    }

}

