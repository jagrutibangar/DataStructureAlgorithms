//Fibonacci series

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

//Fibonacci series is a series of numbers in which each number is the sum of the two preceding ones, usually starting with 0 and 1.
// The Fibonacci sequence is defined by the recurrence relation:
// F(n) = F(n-1) + F(n-2) for n > 1, with base cases F(0) = 0 and F(1) = 1.

// The first few Fibonacci numbers are: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...

int fibo(int n){
    //Base case
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    //Recursive case
    else{
        return fibo(n-1) + fibo(n-2); //Fibonacci relation
    }
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Fibonacci of " << n << " is " << fibo(n) << endl; //This will print the Fibonacci number at position n
    return 0;
}