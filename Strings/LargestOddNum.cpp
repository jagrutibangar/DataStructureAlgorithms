#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

// Function to find the largest odd number in a string
// If no odd number is found, return an empty string


string largestOddNumber(string num) {
    int n = num.size() - 1;
    string ans;

    for (int i = n; i >= 0; i--) {
        if ((num[i] - '0') % 2 != 0) {
            return num.substr(0, i + 1);
        }
    }
    return "";
    }

int main() {
    string num = "52"; // Example input
    string res = largestOddNumber(num); 
    cout << res << endl; // Print the result
    return 0;
}