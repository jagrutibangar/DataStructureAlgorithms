//Count the ways to reach the nth stair
// using recursion

//FIrst we alwasy find how will we reach at the last stair ie. either from n-1 or n-2
// So we will find the number of ways to reach n-1 and n-2 and add them to get the number of ways to reach nth stair
// So the relation will be : ways(n) = ways(n-1) + ways(n-2)


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

int countWays(int n){
    //Base case
    if(n < 0) {
        return 0;
    }
    if(n == 0) return 1;

    return countWays(n-1) + countWays(n-2); //Recursive case
}

int main(){
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;
    cout << "Number of ways to reach the " << n << "th stair is " << countWays(n) << endl; //This will print the number of ways to reach the nth stair
    return 0;
}