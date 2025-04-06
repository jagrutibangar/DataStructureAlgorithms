#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;


//Basic operations on String 
//Finding length of the String
int getLength(char name[]){
    int len = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        len += 1;
     }
    return len;
}

//Reversing a string 
void revString(char name[], int n){
    int s = 0;
    int e = n - 1;
    while(s < e){
        swap(name[s++], name[e--]);
    }
}


int main(){
    char name[10];
    cout << "Enter your name : " ;
    cin >> name ;
    cout << "Your name is " << name << endl;

    int l = getLength(name);
    cout << "The length of the String is : " << l << endl;

    cout << "The Reverse of the String will be : " ;
    revString(name, l);
    cout << name << endl;
    return 0;
}
