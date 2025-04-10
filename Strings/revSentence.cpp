#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;


void updateNew (string &st, int start, int end, string &ans) {
    for (int i = start; i < end; i++) {
        ans.push_back(st[i]);
    }
}

string revSentence(string st, int l) {
    int e = l - 1;
    int i = e;
    string ans;

    for (int j = e; j >= 0; j--) {
        if (st[j] == ' ') {
            if (j < e && st[j + 1] != ' ') { //Process the word if it's not an extra space
                updateNew(st, j + 1, i + 1, ans); // Add the word to ans
                ans.push_back(' '); // Add a space after the word
            }
            i = j - 1; // Update the end index for the next word
        } 
        else if (j == 0) {         //Reached the start of the string
            updateNew(st, j, i + 1, ans);   //Add the last word
            ans.push_back(' ');     //Add a space after the last word
        }
    }
    // Remove the trailing space if it exists
    if (!ans.empty() && ans.back() == ' ') {
        ans.pop_back();
    }

    return ans;
}

int main() {
    string st = "  Hello   World  ";
    int l = st.length();
    cout << revSentence(st, l);
    
    return 0;
}