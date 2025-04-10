//Palindrome String : The strings when reversed reads the same are called as Palindromes.


#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

//Check if the the string is a Palindrome


//This function considers both lower and upper case different
bool isPlaindrome(string s, int l){
    //We can use For loop to check of already created function for reversing
    int st = 0;
    int e = (l - 1);
    
    if(s[e] != s[st]) return false; //the string is a palindrome
    else {
        st++;
        e--;
    } 
    return true; //Not a palindrome
}

//This function considers both lower and uppercase are same
bool isPlaindrome(string s, int l){
    //We can use For loop to check of already created function for reversing
    int st = 0;
    int e = (l - 1);
    
    while(st < e){
        if(toLowercase(s[e] != toLowercase(s[st]))){
            return false;
        } //the string is a palindrome
        else {
        st++;
        e--;
        }  
    }
    return true;
}


char toLowercase(char ch){
    if (ch  >= 'a' && ch <= 'z'){ //if lowercase as it is, is returned
        return ch;
    }
    else{
        char temp = ch + 'A' - 'a';
        //here we subtract the Uppercase letter and then add the lowercase 'a'
        //the difference is of asci values
        return temp;
    } 
}

char toUppercase(char ch){
    if(ch >= 'A' && ch <= 'Z'){
        return ch;
    }
    else{
        char temp = ch - 'a' + 'A';
        return temp;
    }
}

int main(){
    string s[10] = "Moon";
    cout << isPlaindrome(s[5], 5);
    //cout << toUppercase('a');
    return 0;

}