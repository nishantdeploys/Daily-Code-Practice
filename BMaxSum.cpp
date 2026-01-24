#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {5, -2, 3, 1, 2};
    int n = arr.size();
    int b;
    cin >> b;

    if (b > n) {
        cout << "Invalid";
        return 0;
    }

    int leftSum = 0;
    for (int i = 0; i < b; i++) {
        leftSum += arr[i];
    }

    int maxSum = leftSum;
    int rightSum = 0;

    // Take elements from right one by one
    for (int i = 1; i <= b; i++) {
        leftSum -= arr[b - i];      // remove from left
        rightSum += arr[n - i];     // add from right
        maxSum = max(maxSum, leftSum + rightSum);
    }

    cout << maxSum;
}
