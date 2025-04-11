#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

string removeOuterParentheses(string s) {
    int n = s.size() - 1; 
    int track = 0;
    string ans;
    for(int i = 0; i < n; i++){

        if(s[i] == '('){
        if(track > 0){
            ans += s[i];
        }
        track++;
        }
        else{
            track--;
            if(track > 0){
                ans += s[i];
            }
        }
    }
    return ans;   
}

int main() {
    string s = "(()())(())(()(()))";
    string res = removeOuterParentheses(s); // Output: ()()()(())
    cout << res << endl; // Print the result
    return 0;
}