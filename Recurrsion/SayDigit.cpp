//Say Digit : print the digits of a number in words
//Example : 1234 = One Two Three Four

//First make an array of strings containing the words for the digits 0 to 9
//Find the digts of the number using % and / operators
//Then print the words using the array

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

void sayDigit(int n, string arr[]){
    //Base case
    if(n == 0){
        return;
    }

    //Recursive case
    int digit = n % 10; //Get the last digit
    n = n / 10; //Remove the last digit
    
    sayDigit(n, arr);   //Call the function recursively with the remaining number
    cout << arr[digit] << " "; //Print the word for the digit
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    string arr[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"}; //Array of strings containing the words for the digits 0 to 9
    sayDigit(n, arr); //Call the function to print the digits in words
    cout << endl;
    return 0;
}