#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<stdio.h>

using namespace std;


int pairWithMaxSum(vector<int> &arr) {
    int n = arr.size();
    int mx = INT_MIN;

    if (n < 2) return -1;

    for (int i = 0; i < n - 1; i++) {
        int first = arr[i];
        int second = arr[i + 1];

        int smallest, secondSmallest;

        if (first < second) {
            smallest = first;
            secondSmallest = second;
        } else {
            smallest = second;
            secondSmallest = first;
        }

        int sum = smallest + secondSmallest;

        if (sum > mx) {
            mx = sum;
        }
    }
    return mx;
}

int main(){
    vector<int> arr = {5, 4, 3, 1, 6};
    int m = pairWithMaxSum(arr);
    cout << m << endl;
}