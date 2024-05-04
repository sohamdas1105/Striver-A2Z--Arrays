#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int largest = arr[0]; // Assume the first element is the largest initially

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i]; // Update largest if a larger element is found
        }
    }

    return largest;
}
