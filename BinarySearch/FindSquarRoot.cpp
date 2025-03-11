//Find the square root of a number using binary search

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

int SquareRoot(int n){
    int low = 0;
    int high = n;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if(mid * mid == n) return mid;
        else if(mid * mid < n){
            low = mid + 1;
            ans = mid;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The square root of " << n << " is " << SquareRoot(n) << endl;
    return 0;
}
